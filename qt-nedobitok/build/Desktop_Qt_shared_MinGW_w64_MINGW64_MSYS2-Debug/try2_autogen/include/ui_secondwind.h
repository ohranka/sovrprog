/********************************************************************************
** Form generated from reading UI file 'secondwind.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWIND_H
#define UI_SECONDWIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_secondwind
{
public:
    QLabel *label;

    void setupUi(QDialog *secondwind)
    {
        if (secondwind->objectName().isEmpty())
            secondwind->setObjectName("secondwind");
        secondwind->resize(655, 463);
        label = new QLabel(secondwind);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 150, 261, 171));

        retranslateUi(secondwind);

        QMetaObject::connectSlotsByName(secondwind);
    } // setupUi

    void retranslateUi(QDialog *secondwind)
    {
        secondwind->setWindowTitle(QCoreApplication::translate("secondwind", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("secondwind", "1111", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondwind: public Ui_secondwind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWIND_H
