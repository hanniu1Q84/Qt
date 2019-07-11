/********************************************************************************
** Form generated from reading UI file 'clientdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTDIALOG_H
#define UI_CLIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClientDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *send_Edit;
    QPushButton *send_Button;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *Ip_Edit;
    QLabel *label_2;
    QLineEdit *port_Edit;
    QLabel *label_3;
    QLineEdit *user_Edit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *connect_Button;

    void setupUi(QDialog *ClientDialog)
    {
        if (ClientDialog->objectName().isEmpty())
            ClientDialog->setObjectName(QString::fromUtf8("ClientDialog"));
        ClientDialog->resize(274, 387);
        verticalLayout = new QVBoxLayout(ClientDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(ClientDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        send_Edit = new QLineEdit(ClientDialog);
        send_Edit->setObjectName(QString::fromUtf8("send_Edit"));

        horizontalLayout->addWidget(send_Edit);

        send_Button = new QPushButton(ClientDialog);
        send_Button->setObjectName(QString::fromUtf8("send_Button"));
        send_Button->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(send_Button->sizePolicy().hasHeightForWidth());
        send_Button->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        send_Button->setFont(font);

        horizontalLayout->addWidget(send_Button);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ClientDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Ip_Edit = new QLineEdit(ClientDialog);
        Ip_Edit->setObjectName(QString::fromUtf8("Ip_Edit"));

        gridLayout->addWidget(Ip_Edit, 0, 1, 1, 1);

        label_2 = new QLabel(ClientDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        port_Edit = new QLineEdit(ClientDialog);
        port_Edit->setObjectName(QString::fromUtf8("port_Edit"));

        gridLayout->addWidget(port_Edit, 1, 1, 1, 1);

        label_3 = new QLabel(ClientDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        user_Edit = new QLineEdit(ClientDialog);
        user_Edit->setObjectName(QString::fromUtf8("user_Edit"));

        gridLayout->addWidget(user_Edit, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        connect_Button = new QPushButton(ClientDialog);
        connect_Button->setObjectName(QString::fromUtf8("connect_Button"));
        connect_Button->setFont(font);

        horizontalLayout_2->addWidget(connect_Button);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ClientDialog);

        send_Button->setDefault(true);


        QMetaObject::connectSlotsByName(ClientDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientDialog)
    {
        ClientDialog->setWindowTitle(QApplication::translate("ClientDialog", "ClientDialog", nullptr));
        send_Button->setText(QApplication::translate("ClientDialog", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        label->setText(QApplication::translate("ClientDialog", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\357\274\232", nullptr));
        Ip_Edit->setText(QApplication::translate("ClientDialog", "127.0.0.1", nullptr));
        label_2->setText(QApplication::translate("ClientDialog", "\347\253\257\345\217\243\357\274\232", nullptr));
        port_Edit->setText(QApplication::translate("ClientDialog", "8080", nullptr));
        label_3->setText(QApplication::translate("ClientDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        user_Edit->setText(QApplication::translate("ClientDialog", "Tom", nullptr));
        connect_Button->setText(QApplication::translate("ClientDialog", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientDialog: public Ui_ClientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTDIALOG_H
