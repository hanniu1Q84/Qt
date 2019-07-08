/********************************************************************************
** Form generated from reading UI file 'ThreadDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREADDIALOG_H
#define UI_THREADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ThreadDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *StartButton;
    QPushButton *StopButton;
    QPushButton *QuitButton;

    void setupUi(QDialog *ThreadDialog)
    {
        if (ThreadDialog->objectName().isEmpty())
            ThreadDialog->setObjectName(QString::fromUtf8("ThreadDialog"));
        ThreadDialog->resize(272, 51);
        horizontalLayout_2 = new QHBoxLayout(ThreadDialog);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        StartButton = new QPushButton(ThreadDialog);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));

        horizontalLayout->addWidget(StartButton);

        StopButton = new QPushButton(ThreadDialog);
        StopButton->setObjectName(QString::fromUtf8("StopButton"));

        horizontalLayout->addWidget(StopButton);

        QuitButton = new QPushButton(ThreadDialog);
        QuitButton->setObjectName(QString::fromUtf8("QuitButton"));

        horizontalLayout->addWidget(QuitButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ThreadDialog);

        QMetaObject::connectSlotsByName(ThreadDialog);
    } // setupUi

    void retranslateUi(QDialog *ThreadDialog)
    {
        ThreadDialog->setWindowTitle(QApplication::translate("ThreadDialog", "ThreadDialog", nullptr));
        StartButton->setText(QApplication::translate("ThreadDialog", "\345\274\200\345\247\213", nullptr));
        StopButton->setText(QApplication::translate("ThreadDialog", "\345\201\234\346\255\242", nullptr));
        QuitButton->setText(QApplication::translate("ThreadDialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThreadDialog: public Ui_ThreadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREADDIALOG_H
