#ifndef DIS_H
#define DIS_H

#include <QtWidgets/QMainWindow>
#include "ui_dis.h"
#include "ui_mainwindow.h"
#include <vl/exerciseConn.h>
#include <vl/exerciseConnInitializer.h>
#include <vlutil/vlProcessControl.h>
#include <vlutil/vlMiniDumper.h>
#include <vl/reflectedEntityList.h>
#include <vl/entityStateRepository.h>
#include <vl/reflectedEntity.h>
#include <vl/fireInteraction.h>
#include <vl/topoView.h>
#include <vl/fomMapper.h>
#include <vl/environmentProcessRepository.h>
#include <vl/reflectedEnvironmentProcess.h>
#include <vl/reflectedEnvironmentProcessList.h>
#include <vl/signalInteraction.h>
#include <qtextedit.h>
#include <qstring.h>
#include <qtimer.h>
#include <QPaintEvent>
#include <qdebug.h>
#include <qpushbutton.h>
#include <qlist.h>
#include <qsignalmapper.h>
#include "db.h"
#include <Qtsql/qsqlerror.h>
#include <QtSql\qsqlquery.h>

class dis : public QMainWindow
{
	Q_OBJECT

public:
	dis(QWidget *parent = 0);
	~dis();

	DtClock *clock;

	QTimer *timer;

	DtReflectedEntity *first;

	DtReflectedEntityList *rel;

	DtExerciseConn *exConn;

	QString _temps;

	QString _temp;

	QList<DtReflectedEntity * > entityList;

	QList<QPushButton * > pushButtonList;

	QList<QToolButton *> toolButtonList;
	QList<QString> textList;

	QList<QToolButton *> bottomButtonList;
	QList<QString> bottomTextList;

	int relCount ;

	QSignalMapper *pMapper;

	int choice;

	void initialUi();

protected:
    void paintEvent(QPaintEvent *);

private:

	Ui::MainWindow ui;

	void initial();

	db myDb;

	bool isOpen;

	QString acceleration = "";
	QString velocity = "";
	QString damageState = "";
	QString entityType = "";
	QString entityId = "";
	QString density = "";
	QString globalId = "";
	QString location = "";
	QString rotationalVelocity = "";
	QString markingText = "";
	QString orientation = "";
	QString forceType = "";

public slots:

    void on_toolButton_1_clicked();

	void on_bbtn0_clicked();

	void dealSingnal(QString &str);

	void dealtimeout();

	int dealNumber(int);
};

#endif // DIS_H
