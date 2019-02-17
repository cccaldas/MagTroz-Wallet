/********************************************************************************
** Form generated from reading UI file 'newaddressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWADDRESSDIALOG_H
#define UI_NEWADDRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_NewAddressDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *m_labelEdit;
    QLabel *label_2;
    QLineEdit *m_addressEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_okButton;
    QPushButton *m_cancelButton;

    void setupUi(QDialog *NewAddressDialog)
    {
        if (NewAddressDialog->objectName().isEmpty())
            NewAddressDialog->setObjectName(QString::fromUtf8("NewAddressDialog"));
        NewAddressDialog->resize(590, 127);
        gridLayout = new QGridLayout(NewAddressDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(NewAddressDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_labelEdit = new QLineEdit(NewAddressDialog);
        m_labelEdit->setObjectName(QString::fromUtf8("m_labelEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_labelEdit->sizePolicy().hasHeightForWidth());
        m_labelEdit->setSizePolicy(sizePolicy1);
        m_labelEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(m_labelEdit, 0, 1, 1, 3);

        label_2 = new QLabel(NewAddressDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_addressEdit = new QLineEdit(NewAddressDialog);
        m_addressEdit->setObjectName(QString::fromUtf8("m_addressEdit"));
        m_addressEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(m_addressEdit, 1, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 2);

        m_okButton = new QPushButton(NewAddressDialog);
        m_okButton->setObjectName(QString::fromUtf8("m_okButton"));
        m_okButton->setEnabled(true);

        gridLayout->addWidget(m_okButton, 2, 2, 1, 1);

        m_cancelButton = new QPushButton(NewAddressDialog);
        m_cancelButton->setObjectName(QString::fromUtf8("m_cancelButton"));

        gridLayout->addWidget(m_cancelButton, 2, 3, 1, 1);


        retranslateUi(NewAddressDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), NewAddressDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), NewAddressDialog, SLOT(reject()));

        m_okButton->setDefault(true);


        QMetaObject::connectSlotsByName(NewAddressDialog);
    } // setupUi

    void retranslateUi(QDialog *NewAddressDialog)
    {
        NewAddressDialog->setWindowTitle(QApplication::translate("NewAddressDialog", "New address", nullptr));
        label->setText(QApplication::translate("NewAddressDialog", "Label:", nullptr));
        label_2->setText(QApplication::translate("NewAddressDialog", "Address:", nullptr));
        m_okButton->setText(QApplication::translate("NewAddressDialog", "Ok", nullptr));
        m_cancelButton->setText(QApplication::translate("NewAddressDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewAddressDialog: public Ui_NewAddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWADDRESSDIALOG_H
