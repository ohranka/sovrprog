/********************************************************************************
** Form generated from reading UI file 'try2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRY2_H
#define UI_TRY2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_try2
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menulogin;
    QMenu *menugame;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *try2)
    {
        if (try2->objectName().isEmpty())
            try2->setObjectName("try2");
        try2->setEnabled(true);
        try2->resize(809, 564);
        centralwidget = new QWidget(try2);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(70, 210, 341, 97));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);

        try2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(try2);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 809, 26));
        menulogin = new QMenu(menubar);
        menulogin->setObjectName("menulogin");
        menulogin->setEnabled(true);
        menulogin->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        menulogin->setAutoFillBackground(false);
        menulogin->setTearOffEnabled(false);
        menugame = new QMenu(menubar);
        menugame->setObjectName("menugame");
        menugame->setEnabled(true);
        try2->setMenuBar(menubar);
        statusbar = new QStatusBar(try2);
        statusbar->setObjectName("statusbar");
        try2->setStatusBar(statusbar);

        menubar->addAction(menulogin->menuAction());
        menubar->addAction(menugame->menuAction());

        retranslateUi(try2);

        QMetaObject::connectSlotsByName(try2);
    } // setupUi

    void retranslateUi(QMainWindow *try2)
    {
        try2->setWindowTitle(QCoreApplication::translate("try2", "try2", nullptr));
        label_2->setText(QCoreApplication::translate("try2", "Password", nullptr));
        label->setText(QCoreApplication::translate("try2", "Login", nullptr));
        pushButton->setText(QCoreApplication::translate("try2", "Sign in", nullptr));
        menulogin->setTitle(QCoreApplication::translate("try2", "login", nullptr));
        menugame->setTitle(QCoreApplication::translate("try2", "game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class try2: public Ui_try2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRY2_H
