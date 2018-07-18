/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *bottomBar;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *bbtn0;
    QToolButton *bbtn1;
    QToolButton *bbtn2;
    QToolButton *bbtn3;
    QToolButton *bbtn4;
    QToolButton *bbtn5;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QWidget *titleBar;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *title_text;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_4;
    QToolButton *toolButton_3;
    QToolButton *toolButton_2;
    QToolButton *toolButton_1;
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QWidget *tab_2;
    QWidget *information;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;
    QLabel *label7;
    QLabel *label8;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1920, 574);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        bottomBar = new QWidget(centralWidget);
        bottomBar->setObjectName(QStringLiteral("bottomBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(200);
        sizePolicy.setHeightForWidth(bottomBar->sizePolicy().hasHeightForWidth());
        bottomBar->setSizePolicy(sizePolicy);
        bottomBar->setMinimumSize(QSize(0, 105));
        horizontalLayout_5 = new QHBoxLayout(bottomBar);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(1050, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        bbtn0 = new QToolButton(bottomBar);
        bbtn0->setObjectName(QStringLiteral("bbtn0"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(110);
        sizePolicy1.setVerticalStretch(90);
        sizePolicy1.setHeightForWidth(bbtn0->sizePolicy().hasHeightForWidth());
        bbtn0->setSizePolicy(sizePolicy1);
        bbtn0->setMinimumSize(QSize(0, 75));

        horizontalLayout_5->addWidget(bbtn0, 0, Qt::AlignBottom);

        bbtn1 = new QToolButton(bottomBar);
        bbtn1->setObjectName(QStringLiteral("bbtn1"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(110);
        sizePolicy2.setVerticalStretch(75);
        sizePolicy2.setHeightForWidth(bbtn1->sizePolicy().hasHeightForWidth());
        bbtn1->setSizePolicy(sizePolicy2);
        bbtn1->setMinimumSize(QSize(0, 75));

        horizontalLayout_5->addWidget(bbtn1, 0, Qt::AlignBottom);

        bbtn2 = new QToolButton(bottomBar);
        bbtn2->setObjectName(QStringLiteral("bbtn2"));
        sizePolicy2.setHeightForWidth(bbtn2->sizePolicy().hasHeightForWidth());
        bbtn2->setSizePolicy(sizePolicy2);
        bbtn2->setMinimumSize(QSize(0, 75));

        horizontalLayout_5->addWidget(bbtn2, 0, Qt::AlignBottom);

        bbtn3 = new QToolButton(bottomBar);
        bbtn3->setObjectName(QStringLiteral("bbtn3"));
        sizePolicy2.setHeightForWidth(bbtn3->sizePolicy().hasHeightForWidth());
        bbtn3->setSizePolicy(sizePolicy2);
        bbtn3->setMinimumSize(QSize(0, 75));

        horizontalLayout_5->addWidget(bbtn3, 0, Qt::AlignBottom);

        bbtn4 = new QToolButton(bottomBar);
        bbtn4->setObjectName(QStringLiteral("bbtn4"));
        sizePolicy2.setHeightForWidth(bbtn4->sizePolicy().hasHeightForWidth());
        bbtn4->setSizePolicy(sizePolicy2);
        bbtn4->setMinimumSize(QSize(0, 75));

        horizontalLayout_5->addWidget(bbtn4, 0, Qt::AlignBottom);

        bbtn5 = new QToolButton(bottomBar);
        bbtn5->setObjectName(QStringLiteral("bbtn5"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(110);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(bbtn5->sizePolicy().hasHeightForWidth());
        bbtn5->setSizePolicy(sizePolicy3);
        bbtn5->setMinimumSize(QSize(0, 75));

        horizontalLayout_5->addWidget(bbtn5, 0, Qt::AlignBottom);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        horizontalLayout_5->setStretch(0, 3);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(3, 1);
        horizontalLayout_5->setStretch(4, 1);
        horizontalLayout_5->setStretch(5, 1);
        horizontalLayout_5->setStretch(6, 1);
        horizontalLayout_5->setStretch(7, 3);

        horizontalLayout_2->addWidget(bottomBar, 0, Qt::AlignBottom);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        titleBar = new QWidget(centralWidget);
        titleBar->setObjectName(QStringLiteral("titleBar"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(titleBar->sizePolicy().hasHeightForWidth());
        titleBar->setSizePolicy(sizePolicy4);
        horizontalLayout_3 = new QHBoxLayout(titleBar);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        title_text = new QToolButton(titleBar);
        title_text->setObjectName(QStringLiteral("title_text"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(title_text->sizePolicy().hasHeightForWidth());
        title_text->setSizePolicy(sizePolicy5);
        title_text->setMinimumSize(QSize(430, 75));

        horizontalLayout_3->addWidget(title_text);

        horizontalSpacer = new QSpacerItem(1050, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        toolButton_4 = new QToolButton(titleBar);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        sizePolicy3.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(toolButton_4);

        toolButton_3 = new QToolButton(titleBar);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        sizePolicy3.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(toolButton_3);

        toolButton_2 = new QToolButton(titleBar);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        sizePolicy3.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(toolButton_2);

        toolButton_1 = new QToolButton(titleBar);
        toolButton_1->setObjectName(QStringLiteral("toolButton_1"));
        sizePolicy3.setHeightForWidth(toolButton_1->sizePolicy().hasHeightForWidth());
        toolButton_1->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(toolButton_1);


        horizontalLayout->addWidget(titleBar, 0, Qt::AlignTop);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy6);
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 300, 820));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy7);
        tabWidget->setMinimumSize(QSize(300, 820));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setIconSize(QSize(50, 20));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
        tab->setSizePolicy(sizePolicy8);
        tab->setMinimumSize(QSize(140, 40));
        tab->setContextMenuPolicy(Qt::DefaultContextMenu);
        tab->setLayoutDirection(Qt::LeftToRight);
        tab->setStyleSheet(QStringLiteral("QTabBar::tab{width:140}"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(40);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(40, 10, 10, 0);

        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        sizePolicy8.setHeightForWidth(tab_2->sizePolicy().hasHeightForWidth());
        tab_2->setSizePolicy(sizePolicy8);
        tab_2->setMinimumSize(QSize(150, 40));
        tab_2->setStyleSheet(QLatin1String("QTabBar::tab{width:140}\n"
"\n"
""));
        tabWidget->addTab(tab_2, QString());
        information = new QWidget(widget);
        information->setObjectName(QStringLiteral("information"));
        information->setGeometry(QRect(390, 30, 500, 600));
        verticalLayout = new QVBoxLayout(information);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        label1 = new QLabel(information);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setStyleSheet(QLatin1String("font-size:20px;\n"
"font-weight:bold;"));
        label1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label1);

        label2 = new QLabel(information);
        label2->setObjectName(QStringLiteral("label2"));

        verticalLayout->addWidget(label2);

        label3 = new QLabel(information);
        label3->setObjectName(QStringLiteral("label3"));

        verticalLayout->addWidget(label3);

        label4 = new QLabel(information);
        label4->setObjectName(QStringLiteral("label4"));

        verticalLayout->addWidget(label4);

        label5 = new QLabel(information);
        label5->setObjectName(QStringLiteral("label5"));

        verticalLayout->addWidget(label5);

        label6 = new QLabel(information);
        label6->setObjectName(QStringLiteral("label6"));

        verticalLayout->addWidget(label6);

        label7 = new QLabel(information);
        label7->setObjectName(QStringLiteral("label7"));

        verticalLayout->addWidget(label7);

        label8 = new QLabel(information);
        label8->setObjectName(QStringLiteral("label8"));

        verticalLayout->addWidget(label8);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout_3->addWidget(widget, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 1, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 9);
        gridLayout_2->setRowStretch(2, 1);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        bbtn0->setText(QString());
        bbtn1->setText(QString());
        bbtn2->setText(QString());
        bbtn3->setText(QString());
        bbtn4->setText(QApplication::translate("MainWindow", "...", 0));
        bbtn5->setText(QApplication::translate("MainWindow", "...", 0));
        title_text->setText(QApplication::translate("MainWindow", "...", 0));
        toolButton_4->setText(QApplication::translate("MainWindow", "...", 0));
        toolButton_3->setText(QApplication::translate("MainWindow", "...", 0));
        toolButton_2->setText(QApplication::translate("MainWindow", "...", 0));
        toolButton_1->setText(QApplication::translate("MainWindow", "...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\206\233\351\230\237\345\210\227\350\241\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\251\272\351\227\264\347\233\256\346\240\207", 0));
        label1->setText(QString());
        label2->setText(QApplication::translate("MainWindow", "\346\227\213\350\275\254\351\200\237\345\272\246:", 0));
        label3->setText(QApplication::translate("MainWindow", "\345\212\240\351\200\237\345\272\246:", 0));
        label4->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246:", 0));
        label5->setText(QApplication::translate("MainWindow", "\345\256\236\344\275\223\347\261\273\345\236\213:", 0));
        label6->setText(QApplication::translate("MainWindow", "\345\234\260\345\235\200:", 0));
        label7->setText(QApplication::translate("MainWindow", "\345\205\250\347\220\203ID:", 0));
        label8->setText(QApplication::translate("MainWindow", "\350\275\254\345\220\221\346\226\271\345\220\221:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
