/********************************************************************************
** Form generated from reading UI file 'plotwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTWIDGET_H
#define UI_PLOTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_PlotWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *leftLayout;
    QToolButton *minimizeButton;
    QToolButton *pauseButton;
    QToolButton *closeButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *rightLayout;
    QFrame *line;
    QCustomPlot *myPlot;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *PlotWidget)
    {
        if (PlotWidget->objectName().isEmpty())
            PlotWidget->setObjectName(QStringLiteral("PlotWidget"));
        PlotWidget->resize(496, 200);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PlotWidget->sizePolicy().hasHeightForWidth());
        PlotWidget->setSizePolicy(sizePolicy);
        PlotWidget->setMinimumSize(QSize(0, 200));
        PlotWidget->setStyleSheet(QLatin1String("/*QWidget {\n"
"font-size : 6px;\n"
"}*/\n"
"\n"
"QFrame HLine, QFrame VLine {\n"
"color : red;\n"
"}\n"
"\n"
"QToolButton { border: 2px solid red;\n"
"     border-radius: 3px;\n"
"/*     background-color: brown;  */\n"
"}"));
        horizontalLayout = new QHBoxLayout(PlotWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        leftLayout = new QVBoxLayout();
        leftLayout->setSpacing(2);
        leftLayout->setObjectName(QStringLiteral("leftLayout"));
        minimizeButton = new QToolButton(PlotWidget);
        minimizeButton->setObjectName(QStringLiteral("minimizeButton"));
        minimizeButton->setMinimumSize(QSize(32, 24));
        minimizeButton->setCheckable(true);

        leftLayout->addWidget(minimizeButton);

        pauseButton = new QToolButton(PlotWidget);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/Stop-Normal-Red.png"), QSize(), QIcon::Normal, QIcon::Off);
        pauseButton->setIcon(icon);
        pauseButton->setCheckable(true);

        leftLayout->addWidget(pauseButton);

        closeButton = new QToolButton(PlotWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon1);

        leftLayout->addWidget(closeButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        leftLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(leftLayout);

        rightLayout = new QVBoxLayout();
        rightLayout->setObjectName(QStringLiteral("rightLayout"));
        line = new QFrame(PlotWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        rightLayout->addWidget(line);

        myPlot = new QCustomPlot(PlotWidget);
        myPlot->setObjectName(QStringLiteral("myPlot"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(myPlot->sizePolicy().hasHeightForWidth());
        myPlot->setSizePolicy(sizePolicy1);
        myPlot->setMinimumSize(QSize(200, 300));
        verticalLayout = new QVBoxLayout(myPlot);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        rightLayout->addWidget(myPlot);


        horizontalLayout->addLayout(rightLayout);


        retranslateUi(PlotWidget);

        QMetaObject::connectSlotsByName(PlotWidget);
    } // setupUi

    void retranslateUi(QWidget *PlotWidget)
    {
        PlotWidget->setWindowTitle(QApplication::translate("PlotWidget", "Form", 0));
        minimizeButton->setText(QApplication::translate("PlotWidget", "...", 0));
        pauseButton->setText(QApplication::translate("PlotWidget", "...", 0));
#ifndef QT_NO_TOOLTIP
        closeButton->setToolTip(QApplication::translate("PlotWidget", "close this plot", 0));
#endif // QT_NO_TOOLTIP
        closeButton->setText(QApplication::translate("PlotWidget", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class PlotWidget: public Ui_PlotWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTWIDGET_H
