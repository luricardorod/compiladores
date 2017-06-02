/********************************************************************************
** Form generated from reading UI file 'helloqt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOQT_H
#define UI_HELLOQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helloQTClass
{
public:
    QAction *action_Compilar;
    QAction *action_Guardar;
    QAction *action_Salir;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QMenuBar *menuBar;
    QMenu *menulu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *helloQTClass)
    {
        if (helloQTClass->objectName().isEmpty())
            helloQTClass->setObjectName(QStringLiteral("helloQTClass"));
        helloQTClass->resize(734, 533);
        action_Compilar = new QAction(helloQTClass);
        action_Compilar->setObjectName(QStringLiteral("action_Compilar"));
        action_Guardar = new QAction(helloQTClass);
        action_Guardar->setObjectName(QStringLiteral("action_Guardar"));
        action_Salir = new QAction(helloQTClass);
        action_Salir->setObjectName(QStringLiteral("action_Salir"));
        centralWidget = new QWidget(helloQTClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setAutoFillBackground(false);
        textEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        gridLayout->addWidget(textEdit_2, 1, 0, 1, 1);

        helloQTClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(helloQTClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 734, 21));
        menulu = new QMenu(menuBar);
        menulu->setObjectName(QStringLiteral("menulu"));
        helloQTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(helloQTClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        helloQTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(helloQTClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        helloQTClass->setStatusBar(statusBar);

        menuBar->addAction(menulu->menuAction());
        menulu->addSeparator();
        menulu->addAction(action_Compilar);
        menulu->addAction(action_Guardar);
        menulu->addAction(action_Salir);

        retranslateUi(helloQTClass);

        QMetaObject::connectSlotsByName(helloQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *helloQTClass)
    {
        helloQTClass->setWindowTitle(QApplication::translate("helloQTClass", "helloQT", Q_NULLPTR));
        action_Compilar->setText(QApplication::translate("helloQTClass", "&Compilar", Q_NULLPTR));
        action_Guardar->setText(QApplication::translate("helloQTClass", "&Guardar", Q_NULLPTR));
        action_Salir->setText(QApplication::translate("helloQTClass", "&Salir", Q_NULLPTR));
        menulu->setTitle(QApplication::translate("helloQTClass", "&Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class helloQTClass: public Ui_helloQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOQT_H
