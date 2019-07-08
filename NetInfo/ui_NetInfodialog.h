/********************************************************************************
** Form generated from reading UI file 'NetInfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETINFODIALOG_H
#define UI_NETINFODIALOG_H

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

class Ui_NetInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *hostnameEdit;
    QLabel *label_2;
    QLineEdit *IpAddrEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *NetInfoDialog)
    {
        if (NetInfoDialog->objectName().isEmpty())
            NetInfoDialog->setObjectName(QString::fromUtf8("NetInfoDialog"));
        NetInfoDialog->resize(217, 115);
        verticalLayout = new QVBoxLayout(NetInfoDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(NetInfoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        hostnameEdit = new QLineEdit(NetInfoDialog);
        hostnameEdit->setObjectName(QString::fromUtf8("hostnameEdit"));
        hostnameEdit->setAlignment(Qt::AlignCenter);
        hostnameEdit->setReadOnly(true);

        gridLayout->addWidget(hostnameEdit, 0, 1, 1, 1);

        label_2 = new QLabel(NetInfoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        IpAddrEdit = new QLineEdit(NetInfoDialog);
        IpAddrEdit->setObjectName(QString::fromUtf8("IpAddrEdit"));
        IpAddrEdit->setAlignment(Qt::AlignCenter);
        IpAddrEdit->setReadOnly(true);

        gridLayout->addWidget(IpAddrEdit, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(NetInfoDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(NetInfoDialog);

        QMetaObject::connectSlotsByName(NetInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *NetInfoDialog)
    {
        NetInfoDialog->setWindowTitle(QApplication::translate("NetInfoDialog", "NetInfoDialog", nullptr));
        label->setText(QApplication::translate("NetInfoDialog", "\344\270\273\346\234\272\345\220\215:", nullptr));
        label_2->setText(QApplication::translate("NetInfoDialog", "IP\345\234\260\345\235\200:", nullptr));
        pushButton->setText(QApplication::translate("NetInfoDialog", "\350\257\246\347\273\206\345\234\260\345\235\200\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetInfoDialog: public Ui_NetInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETINFODIALOG_H
