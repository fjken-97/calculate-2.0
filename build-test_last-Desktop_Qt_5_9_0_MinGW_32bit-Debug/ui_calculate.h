/********************************************************************************
** Form generated from reading UI file 'calculate.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATE_H
#define UI_CALCULATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculate
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowser_4;
    QLabel *equalTo_2;
    QLineEdit *ResultlineEdit_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_10;
    QPushButton *ClearButton_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_F_2;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *calButton_2;
    QPushButton *pushButton_NULL_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *calculate)
    {
        if (calculate->objectName().isEmpty())
            calculate->setObjectName(QStringLiteral("calculate"));
        calculate->resize(339, 494);
        centralWidget = new QWidget(calculate);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 350, 301, 81));
        textBrowser_3 = new QTextBrowser(groupBox);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(10, 20, 281, 51));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 301, 71));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        textBrowser_4 = new QTextBrowser(layoutWidget);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setMinimumSize(QSize(200, 50));
        textBrowser_4->setMaximumSize(QSize(200, 50));

        horizontalLayout_2->addWidget(textBrowser_4);

        equalTo_2 = new QLabel(layoutWidget);
        equalTo_2->setObjectName(QStringLiteral("equalTo_2"));
        equalTo_2->setMinimumSize(QSize(10, 10));
        equalTo_2->setMaximumSize(QSize(10, 10));

        horizontalLayout_2->addWidget(equalTo_2);

        ResultlineEdit_2 = new QLineEdit(layoutWidget);
        ResultlineEdit_2->setObjectName(QStringLiteral("ResultlineEdit_2"));
        ResultlineEdit_2->setMinimumSize(QSize(50, 50));
        ResultlineEdit_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(ResultlineEdit_2);

        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 80, 301, 231));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_10 = new QPushButton(gridLayoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(50, 50));
        pushButton_10->setMaximumSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_10, 2, 1, 1, 1);

        ClearButton_2 = new QPushButton(gridLayoutWidget);
        ClearButton_2->setObjectName(QStringLiteral("ClearButton_2"));
        ClearButton_2->setMinimumSize(QSize(50, 50));
        ClearButton_2->setMaximumSize(QSize(50, 50));

        gridLayout_2->addWidget(ClearButton_2, 0, 3, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(50, 50));
        pushButton_11->setMaximumSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_11, 0, 0, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(50, 50));
        pushButton_12->setMaximumSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_12, 1, 0, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(50, 50));
        pushButton_13->setMaximumSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_13, 2, 0, 1, 1);

        pushButton_14 = new QPushButton(gridLayoutWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setMinimumSize(QSize(50, 50));
        pushButton_14->setMaximumSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_14, 2, 2, 1, 1);

        pushButton_15 = new QPushButton(gridLayoutWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setMinimumSize(QSize(50, 50));
        pushButton_15->setMaximumSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_15, 0, 1, 1, 1);

        pushButton_16 = new QPushButton(gridLayoutWidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setMinimumSize(QSize(50, 50));
        pushButton_16->setMaximumSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_16, 0, 2, 1, 1);

        pushButton_F_2 = new QPushButton(gridLayoutWidget);
        pushButton_F_2->setObjectName(QStringLiteral("pushButton_F_2"));
        pushButton_F_2->setMinimumSize(QSize(50, 50));
        pushButton_F_2->setMaximumSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_F_2, 1, 3, 1, 1);

        pushButton_17 = new QPushButton(gridLayoutWidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setMinimumSize(QSize(50, 50));
        pushButton_17->setMaximumSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_17, 1, 2, 1, 1);

        pushButton_18 = new QPushButton(gridLayoutWidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setMinimumSize(QSize(100, 50));
        pushButton_18->setMaximumSize(QSize(100, 50));

        gridLayout_2->addWidget(pushButton_18, 3, 0, 1, 2);

        pushButton_19 = new QPushButton(gridLayoutWidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setMinimumSize(QSize(50, 50));
        pushButton_19->setMaximumSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_19, 1, 1, 1, 1);

        calButton_2 = new QPushButton(gridLayoutWidget);
        calButton_2->setObjectName(QStringLiteral("calButton_2"));
        calButton_2->setMinimumSize(QSize(50, 100));
        calButton_2->setMaximumSize(QSize(50, 100));

        gridLayout_2->addWidget(calButton_2, 2, 3, 2, 1);

        pushButton_NULL_2 = new QPushButton(gridLayoutWidget);
        pushButton_NULL_2->setObjectName(QStringLiteral("pushButton_NULL_2"));
        pushButton_NULL_2->setMinimumSize(QSize(50, 50));
        pushButton_NULL_2->setMaximumSize(QSize(50, 50));

        gridLayout_2->addWidget(pushButton_NULL_2, 3, 2, 1, 1);

        calculate->setCentralWidget(centralWidget);
        textBrowser_3->raise();
        groupBox->raise();
        layoutWidget->raise();
        gridLayoutWidget->raise();
        menuBar = new QMenuBar(calculate);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 339, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        calculate->setMenuBar(menuBar);
        mainToolBar = new QToolBar(calculate);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        calculate->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(calculate);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        calculate->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(calculate);

        QMetaObject::connectSlotsByName(calculate);
    } // setupUi

    void retranslateUi(QMainWindow *calculate)
    {
        calculate->setWindowTitle(QApplication::translate("calculate", "calculate", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("calculate", "\347\255\224\346\241\210\346\243\200\351\252\214\347\273\223\346\236\234", Q_NULLPTR));
        equalTo_2->setText(QApplication::translate("calculate", "=", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("calculate", "8", Q_NULLPTR));
        ClearButton_2->setText(QApplication::translate("calculate", "AC", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("calculate", "1", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("calculate", "4", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("calculate", "7", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("calculate", "9", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("calculate", "2", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("calculate", "3", Q_NULLPTR));
        pushButton_F_2->setText(QApplication::translate("calculate", "-", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("calculate", "6", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("calculate", "0", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("calculate", "5", Q_NULLPTR));
        calButton_2->setText(QApplication::translate("calculate", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_NULL_2->setText(QApplication::translate("calculate", "Next", Q_NULLPTR));
        menu->setTitle(QApplication::translate("calculate", "\345\260\217\345\255\246\347\224\237\345\210\267\351\242\230\347\245\236\345\231\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class calculate: public Ui_calculate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATE_H
