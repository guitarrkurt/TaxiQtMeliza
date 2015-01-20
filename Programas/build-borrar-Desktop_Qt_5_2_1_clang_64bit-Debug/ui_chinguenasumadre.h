/********************************************************************************
** Form generated from reading UI file 'chinguenasumadre.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHINGUENASUMADRE_H
#define UI_CHINGUENASUMADRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chinguenasumadre
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *chinguenasumadre)
    {
        if (chinguenasumadre->objectName().isEmpty())
            chinguenasumadre->setObjectName(QStringLiteral("chinguenasumadre"));
        chinguenasumadre->resize(624, 436);
        pushButton = new QPushButton(chinguenasumadre);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(450, 340, 131, 61));
        pushButton_2 = new QPushButton(chinguenasumadre);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 50, 181, 111));

        retranslateUi(chinguenasumadre);

        QMetaObject::connectSlotsByName(chinguenasumadre);
    } // setupUi

    void retranslateUi(QWidget *chinguenasumadre)
    {
        chinguenasumadre->setWindowTitle(QApplication::translate("chinguenasumadre", "Form", 0));
        pushButton->setText(QApplication::translate("chinguenasumadre", "exit", 0));
        pushButton_2->setText(QApplication::translate("chinguenasumadre", "Mostrar Var", 0));
    } // retranslateUi

};

namespace Ui {
    class chinguenasumadre: public Ui_chinguenasumadre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHINGUENASUMADRE_H
