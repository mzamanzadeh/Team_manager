/********************************************************************************
** Form generated from reading UI file 'scatterplotwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCATTERPLOTWIDGET_H
#define UI_SCATTERPLOTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_ScatterPlotWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCustomPlot *scatter;

    void setupUi(QWidget *ScatterPlotWidget)
    {
        if (ScatterPlotWidget->objectName().isEmpty())
            ScatterPlotWidget->setObjectName(QStringLiteral("ScatterPlotWidget"));
        ScatterPlotWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(ScatterPlotWidget);
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scatter = new QCustomPlot(ScatterPlotWidget);
        scatter->setObjectName(QStringLiteral("scatter"));

        verticalLayout->addWidget(scatter);


        retranslateUi(ScatterPlotWidget);

        QMetaObject::connectSlotsByName(ScatterPlotWidget);
    } // setupUi

    void retranslateUi(QWidget *ScatterPlotWidget)
    {
        ScatterPlotWidget->setWindowTitle(QApplication::translate("ScatterPlotWidget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class ScatterPlotWidget: public Ui_ScatterPlotWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCATTERPLOTWIDGET_H
