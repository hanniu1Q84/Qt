/********************************************************************************
** Form generated from reading UI file 'SqliteQtDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLITEQTDIALOG_H
#define UI_SQLITEQTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SqliteQtDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *ValuecomboBox;
    QComboBox *CondcomboBox;
    QPushButton *SortButton;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *IdEdit;
    QLabel *label_2;
    QLineEdit *NameEdit;
    QLabel *label_3;
    QLineEdit *ScoreEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *InsertButton;
    QPushButton *DeleteButton;
    QPushButton *ModifyButton;

    void setupUi(QDialog *SqliteQtDialog)
    {
        if (SqliteQtDialog->objectName().isEmpty())
            SqliteQtDialog->setObjectName(QString::fromUtf8("SqliteQtDialog"));
        SqliteQtDialog->resize(274, 383);
        verticalLayout = new QVBoxLayout(SqliteQtDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ValuecomboBox = new QComboBox(SqliteQtDialog);
        ValuecomboBox->addItem(QString());
        ValuecomboBox->addItem(QString());
        ValuecomboBox->addItem(QString());
        ValuecomboBox->setObjectName(QString::fromUtf8("ValuecomboBox"));
        ValuecomboBox->setMinimumSize(QSize(0, 29));
        ValuecomboBox->setMaximumSize(QSize(16777215, 31));
        QFont font;
        font.setPointSize(14);
        ValuecomboBox->setFont(font);

        horizontalLayout->addWidget(ValuecomboBox);

        CondcomboBox = new QComboBox(SqliteQtDialog);
        CondcomboBox->addItem(QString());
        CondcomboBox->addItem(QString());
        CondcomboBox->setObjectName(QString::fromUtf8("CondcomboBox"));
        CondcomboBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CondcomboBox->sizePolicy().hasHeightForWidth());
        CondcomboBox->setSizePolicy(sizePolicy);
        CondcomboBox->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(CondcomboBox);

        SortButton = new QPushButton(SqliteQtDialog);
        SortButton->setObjectName(QString::fromUtf8("SortButton"));
        SortButton->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(SortButton);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(SqliteQtDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(SqliteQtDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        IdEdit = new QLineEdit(SqliteQtDialog);
        IdEdit->setObjectName(QString::fromUtf8("IdEdit"));

        gridLayout->addWidget(IdEdit, 0, 1, 1, 1);

        label_2 = new QLabel(SqliteQtDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        NameEdit = new QLineEdit(SqliteQtDialog);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));

        gridLayout->addWidget(NameEdit, 1, 1, 1, 1);

        label_3 = new QLabel(SqliteQtDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        ScoreEdit = new QLineEdit(SqliteQtDialog);
        ScoreEdit->setObjectName(QString::fromUtf8("ScoreEdit"));

        gridLayout->addWidget(ScoreEdit, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        InsertButton = new QPushButton(SqliteQtDialog);
        InsertButton->setObjectName(QString::fromUtf8("InsertButton"));

        horizontalLayout_4->addWidget(InsertButton);

        DeleteButton = new QPushButton(SqliteQtDialog);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));

        horizontalLayout_4->addWidget(DeleteButton);

        ModifyButton = new QPushButton(SqliteQtDialog);
        ModifyButton->setObjectName(QString::fromUtf8("ModifyButton"));

        horizontalLayout_4->addWidget(ModifyButton);


        verticalLayout->addLayout(horizontalLayout_4);

        QWidget::setTabOrder(IdEdit, NameEdit);
        QWidget::setTabOrder(NameEdit, ScoreEdit);
        QWidget::setTabOrder(ScoreEdit, CondcomboBox);
        QWidget::setTabOrder(CondcomboBox, DeleteButton);
        QWidget::setTabOrder(DeleteButton, ModifyButton);
        QWidget::setTabOrder(ModifyButton, InsertButton);
        QWidget::setTabOrder(InsertButton, tableView);
        QWidget::setTabOrder(tableView, ValuecomboBox);
        QWidget::setTabOrder(ValuecomboBox, SortButton);

        retranslateUi(SqliteQtDialog);

        InsertButton->setDefault(true);


        QMetaObject::connectSlotsByName(SqliteQtDialog);
    } // setupUi

    void retranslateUi(QDialog *SqliteQtDialog)
    {
        SqliteQtDialog->setWindowTitle(QApplication::translate("SqliteQtDialog", "SqliteQtDialog", nullptr));
        ValuecomboBox->setItemText(0, QApplication::translate("SqliteQtDialog", "ID", nullptr));
        ValuecomboBox->setItemText(1, QApplication::translate("SqliteQtDialog", "Name", nullptr));
        ValuecomboBox->setItemText(2, QApplication::translate("SqliteQtDialog", "Score", nullptr));

        CondcomboBox->setItemText(0, QApplication::translate("SqliteQtDialog", "\345\215\207\345\272\217", nullptr));
        CondcomboBox->setItemText(1, QApplication::translate("SqliteQtDialog", "\351\231\215\345\272\217", nullptr));

        SortButton->setText(QApplication::translate("SqliteQtDialog", "\346\216\222\345\272\217", nullptr));
        label->setText(QApplication::translate("SqliteQtDialog", "\345\255\246\347\224\237\345\255\246\345\217\267:", nullptr));
        label_2->setText(QApplication::translate("SqliteQtDialog", "\345\255\246\347\224\237\345\247\223\345\220\215:", nullptr));
        label_3->setText(QApplication::translate("SqliteQtDialog", "\345\255\246\347\224\237\346\210\220\347\273\251:", nullptr));
        InsertButton->setText(QApplication::translate("SqliteQtDialog", "\346\217\222\345\205\245", nullptr));
        DeleteButton->setText(QApplication::translate("SqliteQtDialog", "\345\210\240\351\231\244", nullptr));
        ModifyButton->setText(QApplication::translate("SqliteQtDialog", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SqliteQtDialog: public Ui_SqliteQtDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLITEQTDIALOG_H
