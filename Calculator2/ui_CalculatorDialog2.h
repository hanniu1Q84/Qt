/********************************************************************************
** Form generated from reading UI file 'CalculatorDialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORDIALOG2_H
#define UI_CALCULATORDIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CalculatorDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *m_editX;
    QLabel *label;
    QLineEdit *m_editY;
    QPushButton *m_btnCalc;
    QLineEdit *m_editZ;

    void setupUi(QDialog *CalculatorDialog)
    {
        if (CalculatorDialog->objectName().isEmpty())
            CalculatorDialog->setObjectName(QString::fromUtf8("CalculatorDialog"));
        CalculatorDialog->resize(455, 53);
        horizontalLayout = new QHBoxLayout(CalculatorDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_editX = new QLineEdit(CalculatorDialog);
        m_editX->setObjectName(QString::fromUtf8("m_editX"));

        horizontalLayout->addWidget(m_editX);

        label = new QLabel(CalculatorDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setLayoutDirection(Qt::RightToLeft);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        m_editY = new QLineEdit(CalculatorDialog);
        m_editY->setObjectName(QString::fromUtf8("m_editY"));

        horizontalLayout->addWidget(m_editY);

        m_btnCalc = new QPushButton(CalculatorDialog);
        m_btnCalc->setObjectName(QString::fromUtf8("m_btnCalc"));
        m_btnCalc->setEnabled(false);
        m_btnCalc->setFont(font);
        m_btnCalc->setIconSize(QSize(12, 8));

        horizontalLayout->addWidget(m_btnCalc);

        m_editZ = new QLineEdit(CalculatorDialog);
        m_editZ->setObjectName(QString::fromUtf8("m_editZ"));
        m_editZ->setReadOnly(true);

        horizontalLayout->addWidget(m_editZ);


        retranslateUi(CalculatorDialog);

        QMetaObject::connectSlotsByName(CalculatorDialog);
    } // setupUi

    void retranslateUi(QDialog *CalculatorDialog)
    {
        CalculatorDialog->setWindowTitle(QApplication::translate("CalculatorDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("CalculatorDialog", "+", nullptr));
        m_btnCalc->setText(QApplication::translate("CalculatorDialog", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorDialog: public Ui_CalculatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORDIALOG2_H
