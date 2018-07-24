#include "dis.h"
#include <qinputdialog.h>
#include <qdir.h>
#include <qlabel.h>

int keybrdTick()
{
	char *keyPtr = DtPollBlockingInputLine();
	if (keyPtr && (*keyPtr == 'q' || *keyPtr == 'Q'))
		return -1;
	else
		return 0;
}


void fireCb(DtFireInteraction* fire, void* /*usr*/)
{
	std::cout << "Fire Interaction from "
		<< fire->attackerId().string() << std::endl;
}

void sigCb(DtSignalInteraction* sig, void* /*usr*/)
{

}

void printEnvProc(DtReflectedEnvironmentProcess* obj, void* userData)
{
	obj->epsr()->printData();
}

void envProcAddedCb(DtReflectedEnvironmentProcess* obj, void* userData)
{
	// register a callback for when an existing object is updated.
	obj->addPostUpdateCallback(printEnvProc, userData);
}

dis::dis(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	timer = new QTimer(this);

	this->initial();

	this->initialUi();

	QObject::connect(timer, &QTimer::timeout, this, &dis::dealtimeout);

	pMapper = new QSignalMapper();

	timer->start(100);

	choice = 0;

	
}

dis::~dis()
{

}


void dis::dealSingnal(QString &str)
{
	_temps = str;

}

void dis::dealtimeout()
{
	update();
}


void dis::initial()
{

	DtVrlApplicationInitializer appInit(0, NULL, "VR-Link Listen");

	appInit.setUseAsynchIO(true);

	appInit.setDisVersionToSend(7);

	DtExerciseConn::InitializationStatus status = DtExerciseConn::DtINIT_SUCCESS;

	exConn = new DtExerciseConn(appInit, &status);

	if (status != 0)
	{
		std::cout << "Error creating exercise connection." << std::endl;
		return;
	}

	DtReflectedEnvironmentProcessList relEnv(exConn);
	relEnv.addEnvironmentProcessAdditionCallback(envProcAddedCb, NULL);

	// Register a callback to handle fire interactions.
	DtFireInteraction::addCallback(exConn, fireCb, NULL);

	DtSignalInteraction::addCallback(exConn, sigCb, NULL);

	rel = new DtReflectedEntityList(exConn);

	// Initialize VR-Link time.
	clock = exConn->clock();

	relCount = 0;

}

int dis::dealNumber(int number)
{
	choice = number;
	
	return number;
}

void dis::paintEvent(QPaintEvent *)
{
	
	if (keybrdTick() == -1)
		return;

	// Tell VR-Link the current value of simulation time.
	clock->setSimTime(clock->elapsedRealTime());

	// Process any incoming messages.
	exConn->drainInput();

	// Find the first entity in the reflected entity list.
	DtReflectedEntity *first = rel->first();

	if (first)
	{
		// Grab its state repository, where we can inspect its data.
		DtEntityStateRepository *esr = first->entityStateRep();

		if (entityList.at(0) != NULL)
		{
			DtEntityStateRepository *myesr = entityList.at(choice)->entityStateRep();

			double refLatitude = DtDeg2Rad(35.699760);
			double refLongitude = DtDeg2Rad(-121.326577);
			DtTopoView topoView(myesr, refLatitude, refLongitude);

			acceleration = myesr->acceleration().string();
			velocity = myesr->velocity().string();
			damageState = myesr->damageState();
			entityType = myesr->entityType().string();
			entityId = myesr->entityId().string();
			density = myesr->density();
			globalId = myesr->globalId().string();
			location = myesr->location().string();
			rotationalVelocity = myesr->rotationalVelocity().string();
			markingText = myesr->markingText();
			orientation = myesr->orientation().string();
			forceType = myesr->forceId();

			_temp = QString::fromStdString(topoView.location().string().stdString());
			ui.label1->setText(markingText);
			//ui.label1->text().replace(ui.label1->text().indexOf(":"), -1, markingText);
			ui.label2->setText(QString::fromLocal8Bit("旋转速度:%1").arg(rotationalVelocity));
			ui.label3->setText(QString::fromLocal8Bit("加速度:%1").arg(acceleration));
			ui.label4->setText(QString::fromLocal8Bit("速度:%1").arg(velocity));
			ui.label5->setText(QString::fromLocal8Bit("实体类型:%1").arg(entityType));
			ui.label6->setText(QString::fromLocal8Bit("地址:%1").arg(location));
			ui.label7->setText(QString::fromLocal8Bit("全球ID:%1").arg(globalId));
			ui.label8->setText(QString::fromLocal8Bit("转动方向:%1").arg(orientation));
		}

		// Create a topographic view on the state repository, so we
		// can look at position information in topographic coordinates.
	}

	if (relCount == 0)
	{

		int i = relCount;

		int num = 0;

		relCount = rel->count();

		DtReflectedEntity *item;

		item = first;

		entityList = QList<DtReflectedEntity * >();

		pushButtonList = QList<QPushButton *>();

		while ( item )
		{

			QString markingText = item->entityStateRep()->markingText();

			QPushButton * button = new QPushButton(this);

			button->setObjectName(QString("mybutton%1").arg(num));

			button->setText(markingText);

			button->setStyleSheet(QString("QPushButton{background:#049ff1; border-radius:8px; width:30px;height:30px;}"
				" QPushButton:hover{background:#3939be; color:#f0ff00;}"
				"QPushButton:pressed{background:#3939be;padding-left:5px;padding-top:5px; color:#f0ff00;}"
				));
			ui.verticalLayout_2->setAlignment(Qt::AlignTop);

			ui.verticalLayout_2->addWidget(button);

			entityList << item;

			pushButtonList << button;

			item = item->next();

			connect(button, SIGNAL(clicked()), pMapper, SLOT(map()));

			pMapper->setMapping(button, num);

			num++;
			
		}	

		connect(pMapper,static_cast<void(QSignalMapper::*)(int)>(&QSignalMapper::mapped), this, &dis::dealNumber);
	}

	if (isInsert == true)
	{
		insertData();
	}

	// Sleep till next iteration.
	DtSleep(0.1);
	
}

void dis::initialUi()
{
	this->setObjectName("mainWindow");
	//this->setWindowFlags(Qt::FramelessWindowHint);
	this->setStyleSheet(QString("#mainWindow{border-image:url(':/new/prefix1/img/bg.jpg');}"));

	ui.titleBar->setObjectName("titleBar");
	ui.titleBar->setStyleSheet(QString("#titleBar{border-image:url(':/new/prefix1/img/title_bg.png');}"));

	ui.title_text->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
	ui.title_text->setIcon(QIcon(QPixmap(":/new/prefix1/img/icon1.png")));
	ui.title_text->setStyleSheet(QString("background:transparent;"
		"color:#7abcd3;"
		"font-size:30px;"
		"font-weight:bold;"
		"margin-left:20px;"
		));
	ui.title_text->setIconSize(QSize(85, 75));
	ui.title_text->setText(QString::fromLocal8Bit("战场环境保障平台"));

	toolButtonList = QList<QToolButton *>() << ui.toolButton_1
		<< ui.toolButton_2
		<< ui.toolButton_3
		<< ui.toolButton_4;

	textList << QString::fromLocal8Bit("退出")
		<< QString::fromLocal8Bit("设置")
		<< QString::fromLocal8Bit("帮助")
		<< QString::fromLocal8Bit("关于");

	for (int i = 0; i < 4; i++)
	{
		QToolButton *btn = toolButtonList.at(i);
		btn->setStyleSheet(QString("background:transparent;"
			"color:#7abcd3;"
			"font-size:18px;"
			));
		btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
		btn->setIconSize(QSize(40, 25));
		btn->setIcon(QIcon(QPixmap(QString(":/new/prefix1/img/btn%1.png").arg(i + 1))));
		btn->setText(textList.at(i));
	}

	ui.bottomBar->setObjectName("bottomBar");
	ui.bottomBar->setStyleSheet(QString("#bottomBar{border-image:url(':/new/prefix1/img/bottom_bg.png');}"));


	bottomButtonList = QList<QToolButton *>() << ui.bbtn0
		<< ui.bbtn1
		<< ui.bbtn2
		<< ui.bbtn3
		<< ui.bbtn4
		<< ui.bbtn5;

	bottomTextList << QString::fromLocal8Bit("确定")
		<< QString::fromLocal8Bit("暂停")
		<< QString::fromLocal8Bit("结束")
		<< QString::fromLocal8Bit("空间量算")
		<< QString::fromLocal8Bit("空间分析")
		<< QString::fromLocal8Bit("综合查询");

	for (int i = 0; i < 6; i++)
	{
		QToolButton *btn = bottomButtonList.at(i);
		btn->setStyleSheet(QString("background:transparent;"
			"color:#7abcd3;"
			"font-size:16px;"
			));
		btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
		btn->setIconSize(QSize(60, 45));
		btn->setIcon(QIcon(QPixmap(QString(":/new/prefix1/img/bicon%1.png").arg(i))));
		btn->setText(bottomTextList.at(i));

	}

	ui.tabWidget->setObjectName("tabWidget");
	ui.tabWidget->setStyleSheet(
		"QTabWidget::pane{height:770px;border-image:url(':/new/prefix1/img/tab_bar.png')}"
		"#tabWidget QTabBar::tab{width:140px; background:transparent;color:#00b7ee;}"
		"#tabWidget QTabBar::tab:first{ border-image:url(':/new/prefix1/img/leftTab.png');margin-left:32px; height:44px; }"
		"#tabWidget QTabBar::tab:last{width:128px;  border-image:url(':/new/prefix1/img/rightTab.png');}");


	ui.information->setObjectName("information");
	ui.information->setStyleSheet(
		"#information{ border-image:url(':/new/prefix1/img/informations.png'); color:#00b7ee;}"
		"#information QLabel { display:block; color:#40d3ff;  margin-left:30px;}"

		);
}

void dis::on_toolButton_1_clicked()
{
	this->close();
}

void dis::on_bbtn0_clicked()
{
	bool ok;
	QString text = QInputDialog::getText(this, QString::fromLocal8Bit("数据库名称"),
		tr("database name:"), QLineEdit::Normal,
		QString::fromLocal8Bit("请输入"), &ok);
	if (ok && !text.isEmpty())
	{
		dbName = text;  //数据库名称

		isOpen = myDb.connectDatabase(dbName + ".db");

		QSqlQuery query;

		query.exec(QString(
			"create table info ("
			"id int auto_increment primary key ,"
			"rotationVelocity string ,"
			"acceleration string ,"
			"velocity string,"
			"entitytype string,"
			"location string,"
			"globalId string,"
			"orientation string );"

			));
	}

	if (isOpen)
	{
		isInsert = true;
	}
}

void dis::on_bbtn1_clicked()
{
	if (isOpen)
	{
		isInsert = !isInsert;
	}
}


// 断开数据库连接
void dis::on_bbtn2_clicked()
{
	QSqlDatabase::removeDatabase(dbName);
	
	myDb.getInstance().close();
}

bool dis::insertData()
{
	
	QSqlQuery myquery;

	myquery.prepare(QString(
		"insert into info(rotationVelocity,acceleration,velocity,entityType,location,globalId,orientation)"
		"values(:rotationVelocity,:acceleration,:velocity,:entityType,:location,:globalId,:orientation)"
		));

	myquery.bindValue(":rotationVelocity", rotationalVelocity);
	myquery.bindValue(":acceleration", acceleration);
	myquery.bindValue(":velocity", velocity);
	myquery.bindValue(":entitytype", entityType);
	myquery.bindValue(":location", location);
	myquery.bindValue(":globalId", globalId);
	myquery.bindValue(":orientation", orientation);

	bool successful = myquery.exec();

	qDebug() << "data insert is successful" << successful;

	qDebug() << myquery.lastError();
	
	return successful;
}





