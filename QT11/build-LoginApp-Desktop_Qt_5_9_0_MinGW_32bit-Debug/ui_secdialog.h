/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_secDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *secDialog)
    {
        if (secDialog->objectName().isEmpty())
            secDialog->setObjectName(QStringLiteral("secDialog"));
        secDialog->resize(637, 457);
        label = new QLabel(secDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 200, 251, 91));

        retranslateUi(secDialog);

        QMetaObject::connectSlotsByName(secDialog);
    } // setupUi

    void retranslateUi(QDialog *secDialog)
    {
        secDialog->setWindowTitle(QApplication::translate("secDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("secDialog", "Hello From second label", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class secDialog: public Ui_secDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
