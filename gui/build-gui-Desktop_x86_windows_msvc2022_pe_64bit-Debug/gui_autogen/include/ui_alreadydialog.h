/********************************************************************************
** Form generated from reading UI file 'alreadydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALREADYDIALOG_H
#define UI_ALREADYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_AlreadyDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AlreadyDialog)
    {
        if (AlreadyDialog->objectName().isEmpty())
            AlreadyDialog->setObjectName("AlreadyDialog");
        AlreadyDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(AlreadyDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(AlreadyDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AlreadyDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AlreadyDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AlreadyDialog);
    } // setupUi

    void retranslateUi(QDialog *AlreadyDialog)
    {
        AlreadyDialog->setWindowTitle(QCoreApplication::translate("AlreadyDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlreadyDialog: public Ui_AlreadyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALREADYDIALOG_H
