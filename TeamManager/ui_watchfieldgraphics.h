/********************************************************************************
** Form generated from reading UI file 'watchfieldgraphics.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WATCHFIELDGRAPHICS_H
#define UI_WATCHFIELDGRAPHICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WatchFieldGraphics
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *mainLayout;

    void setupUi(QWidget *WatchFieldGraphics)
    {
        if (WatchFieldGraphics->objectName().isEmpty())
            WatchFieldGraphics->setObjectName(QStringLiteral("WatchFieldGraphics"));
        WatchFieldGraphics->resize(400, 300);
        horizontalLayout_3 = new QHBoxLayout(WatchFieldGraphics);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mainLayout = new QHBoxLayout();
        mainLayout->setSpacing(0);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));

        horizontalLayout_3->addLayout(mainLayout);


        retranslateUi(WatchFieldGraphics);

        QMetaObject::connectSlotsByName(WatchFieldGraphics);
    } // setupUi

    void retranslateUi(QWidget *WatchFieldGraphics)
    {
        WatchFieldGraphics->setWindowTitle(QApplication::translate("WatchFieldGraphics", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class WatchFieldGraphics: public Ui_WatchFieldGraphics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WATCHFIELDGRAPHICS_H
