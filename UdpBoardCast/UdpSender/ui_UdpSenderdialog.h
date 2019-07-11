/********************************************************************************
** Form generated from reading UI file 'UdpSenderdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPSENDERDIALOG_H
#define UI_UDPSENDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UdpSenderDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *Message_Edit;
    QLabel *label_2;
    QLineEdit *Port_Edit_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Start_Button;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *UdpSenderDialog)
    {
        if (UdpSenderDialog->objectName().isEmpty())
            UdpSenderDialog->setObjectName(QString::fromUtf8("UdpSenderDialog"));
        UdpSenderDialog->resize(232, 117);
        verticalLayout = new QVBoxLayout(UdpSenderDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(UdpSenderDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Message_Edit = new QLineEdit(UdpSenderDialog);
        Message_Edit->setObjectName(QString::fromUtf8("Message_Edit"));

        gridLayout->addWidget(Message_Edit, 0, 1, 1, 1);

        label_2 = new QLabel(UdpSenderDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        Port_Edit_2 = new QLineEdit(UdpSenderDialog);
        Port_Edit_2->setObjectName(QString::fromUtf8("Port_Edit_2"));

        gridLayout->addWidget(Port_Edit_2, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Start_Button = new QPushButton(UdpSenderDialog);
        Start_Button->setObjectName(QString::fromUtf8("Start_Button"));
        QFont font;
        font.setPointSize(12);
        Start_Button->setFont(font);

        horizontalLayout->addWidget(Start_Button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UdpSenderDialog);

        QMetaObject::connectSlotsByName(UdpSenderDialog);
    } // setupUi

    void retranslateUi(QDialog *UdpSenderDialog)
    {
        UdpSenderDialog->setWindowTitle(QApplication::translate("UdpSenderDialog", "UdpSenderDialog", nullptr));
        label->setText(QApplication::translate("UdpSenderDialog", "\350\276\223\345\205\245\346\266\210\346\201\257:", nullptr));
        Message_Edit->setText(QApplication::translate("UdpSenderDialog", "Hello,world!", nullptr));
        label_2->setText(QApplication::translate("UdpSenderDialog", "\345\271\277\346\222\255\347\253\257\345\217\243:", nullptr));
        Port_Edit_2->setText(QApplication::translate("UdpSenderDialog", "8888", nullptr));
        Start_Button->setText(QApplication::translate("UdpSenderDialog", "\345\274\200\345\247\213\345\271\277\346\222\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UdpSenderDialog: public Ui_UdpSenderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPSENDERDIALOG_H
