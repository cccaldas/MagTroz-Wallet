/********************************************************************************
** Form generated from reading UI file 'transactiondetailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONDETAILSDIALOG_H
#define UI_TRANSACTIONDETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TransactionDetailsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *m_detailsBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_closeButton;

    void setupUi(QDialog *TransactionDetailsDialog)
    {
        if (TransactionDetailsDialog->objectName().isEmpty())
            TransactionDetailsDialog->setObjectName(QString::fromUtf8("TransactionDetailsDialog"));
        TransactionDetailsDialog->resize(736, 357);
        verticalLayout = new QVBoxLayout(TransactionDetailsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_detailsBrowser = new QTextBrowser(TransactionDetailsDialog);
        m_detailsBrowser->setObjectName(QString::fromUtf8("m_detailsBrowser"));

        verticalLayout->addWidget(m_detailsBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_closeButton = new QPushButton(TransactionDetailsDialog);
        m_closeButton->setObjectName(QString::fromUtf8("m_closeButton"));

        horizontalLayout->addWidget(m_closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TransactionDetailsDialog);
        QObject::connect(m_closeButton, SIGNAL(clicked()), TransactionDetailsDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(TransactionDetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *TransactionDetailsDialog)
    {
        TransactionDetailsDialog->setWindowTitle(QApplication::translate("TransactionDetailsDialog", "Transaction details", nullptr));
        m_closeButton->setText(QApplication::translate("TransactionDetailsDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransactionDetailsDialog: public Ui_TransactionDetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONDETAILSDIALOG_H
