/********************************************************************************
** Form generated from reading UI file 'UdpReceiverDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPRECEIVERDIALOG_H
#define UI_UDPRECEIVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UdpReceiverDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Port_Edit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *Start_Button;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *UdpReceiverDialog)
    {
        if (UdpReceiverDialog->objectName().isEmpty())
            UdpReceiverDialog->setObjectName(QString::fromUtf8("UdpReceiverDialog"));
        UdpReceiverDialog->resize(274, 287);
        verticalLayout = new QVBoxLayout(UdpReceiverDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(UdpReceiverDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(UdpReceiverDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        Port_Edit = new QLineEdit(UdpReceiverDialog);
        Port_Edit->setObjectName(QString::fromUtf8("Port_Edit"));
        Port_Edit->setFont(font);

        horizontalLayout->addWidget(Port_Edit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Start_Button = new QPushButton(UdpReceiverDialog);
        Start_Button->setObjectName(QString::fromUtf8("Start_Button"));
        QFont font1;
        font1.setPointSize(13);
        Start_Button->setFont(font1);

        horizontalLayout_2->addWidget(Start_Button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(UdpReceiverDialog);

        QMetaObject::connectSlotsByName(UdpReceiverDialog);
    } // setupUi

    void retranslateUi(QDialog *UdpReceiverDialog)
    {
        UdpReceiverDialog->setWindowTitle(QApplication::translate("UdpReceiverDialog", "UdpReceiverDialog", nullptr));
        label->setText(QApplication::translate("UdpReceiverDialog", "\346\216\245\346\224\266\346\266\210\346\201\257\347\253\257\345\217\243:", nullptr));
        Port_Edit->setText(QApplication::translate("UdpReceiverDialog", "8888", nullptr));
        Start_Button->setText(QApplication::translate("UdpReceiverDialog", "\345\274\200\345\247\213\346\216\245\346\224\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UdpReceiverDialog: public Ui_UdpReceiverDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPRECEIVERDIALOG_H
