/********************************************************************************
** Form generated from reading UI file 'ventana2.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA2_H
#define UI_VENTANA2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventana2
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ventana2)
    {
        if (ventana2->objectName().isEmpty())
            ventana2->setObjectName(QStringLiteral("ventana2"));
        ventana2->resize(800, 600);
        menubar = new QMenuBar(ventana2);
        menubar->setObjectName(QStringLiteral("menubar"));
        ventana2->setMenuBar(menubar);
        centralwidget = new QWidget(ventana2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ventana2->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ventana2);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ventana2->setStatusBar(statusbar);

        retranslateUi(ventana2);

        QMetaObject::connectSlotsByName(ventana2);
    } // setupUi

    void retranslateUi(QMainWindow *ventana2)
    {
        ventana2->setWindowTitle(QApplication::translate("ventana2", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class ventana2: public Ui_ventana2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA2_H
