/********************************************************************************
** Form generated from reading UI file 'widgetprueba.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETPRUEBA_H
#define UI_WIDGETPRUEBA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetPrueba
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *widgetPrueba)
    {
        if (widgetPrueba->objectName().isEmpty())
            widgetPrueba->setObjectName(QStringLiteral("widgetPrueba"));
        widgetPrueba->resize(800, 490);
        widgetPrueba->setMinimumSize(QSize(800, 490));
        widgetPrueba->setMaximumSize(QSize(800, 490));
        label = new QLabel(widgetPrueba);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 800, 490));
        pushButton_2 = new QPushButton(widgetPrueba);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 440, 114, 32));
        pushButton_2->setStyleSheet(QLatin1String("border-color: rgb(255, 200, 76);\n"
"color: rgb(255, 255, 102);\n"
"background-color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(widgetPrueba);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 440, 114, 32));
        pushButton->setStyleSheet(QLatin1String("border-color: rgb(255, 200, 76);\n"
"color: rgb(255, 255, 102);\n"
"background-color: rgb(0, 0, 0);"));

        retranslateUi(widgetPrueba);

        QMetaObject::connectSlotsByName(widgetPrueba);
    } // setupUi

    void retranslateUi(QWidget *widgetPrueba)
    {
        widgetPrueba->setWindowTitle(QApplication::translate("widgetPrueba", "Form", 0));
        label->setText(QApplication::translate("widgetPrueba", "TextLabel", 0));
        pushButton_2->setText(QApplication::translate("widgetPrueba", "Salir", 0));
        pushButton->setText(QApplication::translate("widgetPrueba", ">", 0));
    } // retranslateUi

};

namespace Ui {
    class widgetPrueba: public Ui_widgetPrueba {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETPRUEBA_H
