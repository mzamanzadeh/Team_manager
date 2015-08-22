/********************************************************************************
** Form generated from reading UI file 'plotmanagerwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTMANAGERWIDGET_H
#define UI_PLOTMANAGERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlotManagerWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *scrollAreaLayout;

    void setupUi(QWidget *PlotManagerWidget)
    {
        if (PlotManagerWidget->objectName().isEmpty())
            PlotManagerWidget->setObjectName(QStringLiteral("PlotManagerWidget"));
        PlotManagerWidget->resize(559, 300);
        verticalLayout = new QVBoxLayout(PlotManagerWidget);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(PlotManagerWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 555, 296));
        scrollAreaLayout = new QVBoxLayout(scrollAreaWidgetContents);
        scrollAreaLayout->setObjectName(QStringLiteral("scrollAreaLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(PlotManagerWidget);

        QMetaObject::connectSlotsByName(PlotManagerWidget);
    } // setupUi

    void retranslateUi(QWidget *PlotManagerWidget)
    {
        PlotManagerWidget->setWindowTitle(QApplication::translate("PlotManagerWidget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class PlotManagerWidget: public Ui_PlotManagerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTMANAGERWIDGET_H
