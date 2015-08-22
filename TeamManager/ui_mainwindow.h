/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionWatch;
    QAction *actionCommnad;
    QAction *actionDesign;
    QAction *actionAI;
    QAction *actionHardware;
    QAction *actionQuit;
    QAction *actionMaximize;
    QAction *actionMinimize;
    QAction *actionIdle_Server;
    QAction *actionIdle_Vision;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QWidget *outerMainToolContainerWg;
    QHBoxLayout *horizontalLayout_15;
    QStackedWidget *mainToolsSW;
    QWidget *watchToolsPage_1;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *chooseGameColorAndSideGB;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *chooseCyrusColorGB;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *chooseTeamColorBlueRB;
    QRadioButton *chooseTeamColorYellowRB;
    QGroupBox *chooseCyrusSideGB;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *chooseTeamSideLeftRB;
    QLabel *pipeBetweenRightAndLeftLbl;
    QRadioButton *chooseTeamSideRightRB;
    QGroupBox *chooseVisionSourceGB;
    QVBoxLayout *verticalLayout;
    QRadioButton *chooseSourceSSLVisionRB;
    QRadioButton *chooseSourceCyrusRB;
    QRadioButton *chooseSourceGRSimRB;
    QRadioButton *chooseSourceLogFileRB;
    QGroupBox *playLogGB;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *logStepBackwardTB;
    QToolButton *logPlayTB;
    QToolButton *logPauseTB;
    QToolButton *logStepForwardTB;
    QLCDNumber *logTimeLcd;
    QSlider *logSeekPlayingHSl;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *logFileNameLE;
    QToolButton *logFilebrowseTB;
    QSpacerItem *verticalSpacer;
    QGroupBox *recordLogGB;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *logRecordTB;
    QToolButton *logSelectStoreFolderTB;
    QLabel *label;
    QLCDNumber *logTimeLcd_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *aiGraphicOptionsGB;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *fieldGraphicOptionsGB;
    QFormLayout *formLayout_3;
    QSpinBox *fieldGridNumRowsSB;
    QToolButton *showFieldRiskyTilesTB;
    QToolButton *showFieldGridTB;
    QSpinBox *fieldGridNumColumnsSB;
    QGroupBox *agentsGraphicOptionsGB;
    QFormLayout *formLayout;
    QToolButton *showAgentsTargetTB;
    QToolButton *showAgentsPathPlanTB;
    QToolButton *showAgentsTimeOfAccessBallTB;
    QToolButton *showAgentsOpenAnglesToGoalTB;
    QToolButton *showAgentVelocityVectorTB;
    QGroupBox *ballGraphicOptionsGB;
    QToolButton *showBallVelocityVectorTB;
    QToolButton *showBallOpenAnglesToGoalTB;
    QSpinBox *trackBallMaxFrameSB;
    QLabel *trackBallMaxFrameLbl;
    QGroupBox *setColorsGB;
    QFormLayout *formLayout_2;
    QLabel *setColorYellowRobotsLbl;
    QToolButton *setColorYellowRobotsTB;
    QLabel *setColorBlueRobotsLbl;
    QToolButton *setColorBlueRobotsTB;
    QLabel *setColorRobotTargetsLbl;
    QToolButton *setColorRobotTargetsTB;
    QLabel *setColorBallLbl;
    QToolButton *setColorBallTB;
    QLabel *setColorFieldLbl;
    QToolButton *setColorFieldTB;
    QSpacerItem *watchToolsPageHS;
    QWidget *commandToolsPage_2;
    QLabel *testLabel_2;
    QWidget *designToolsPage_3;
    QLabel *testLabel_3;
    QWidget *aiToolsPage_4;
    QLabel *testLabel_4;
    QWidget *hardwareToolsPage_5;
    QLabel *testLabel_5;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_3;
    QToolButton *pinMainToolsTB;
    QSplitter *splitter_1;
    QStackedWidget *mainWidgetsSW;
    QWidget *fieldMainWidget_1_2;
    QHBoxLayout *horizontalLayout_7;
    QSplitter *splitter_2;
    QWidget *fieldContainerWg;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *fieldContainerLayout;
    QWidget *localRefereeBoxContainterWg;
    QHBoxLayout *horizontalLayout_13;
    QTextEdit *textEdit_2;
    QWidget *messageDisplayingContainerWg;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *messengerLayout;
    QWidget *designMainWidget_3;
    QHBoxLayout *horizontalLayout_9;
    QSplitter *design_script_Splitter;
    QTreeWidget *scriptDirectoryTreeWg;
    QTabWidget *scriptEditorTWg;
    QWidget *tab;
    QWidget *designFieldContainerWg;
    QWidget *aiMainWidget_4;
    QHBoxLayout *horizontalLayout_10;
    QSplitter *aiTree_tab_Splitter;
    QTreeWidget *aiMainTreeWg;
    QTabWidget *aiMainTabWg;
    QWidget *tab_2;
    QWidget *hardwareMainWidget_5;
    QHBoxLayout *horizontalLayout_11;
    QTextEdit *testTextEdit_1;
    QWidget *plotsContainerWg;
    QHBoxLayout *plotterLayout;
    QToolBar *mainMenuToolBar;
    QStatusBar *statusBar;
    QToolBar *windowButtonsToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1089, 520);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionWatch = new QAction(MainWindow);
        actionWatch->setObjectName(QStringLiteral("actionWatch"));
        actionWatch->setCheckable(true);
        actionCommnad = new QAction(MainWindow);
        actionCommnad->setObjectName(QStringLiteral("actionCommnad"));
        actionCommnad->setCheckable(true);
        actionDesign = new QAction(MainWindow);
        actionDesign->setObjectName(QStringLiteral("actionDesign"));
        actionDesign->setCheckable(true);
        actionAI = new QAction(MainWindow);
        actionAI->setObjectName(QStringLiteral("actionAI"));
        actionAI->setCheckable(true);
        actionHardware = new QAction(MainWindow);
        actionHardware->setObjectName(QStringLiteral("actionHardware"));
        actionHardware->setCheckable(true);
        actionHardware->setEnabled(true);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/min-max-close/application_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon);
        actionMaximize = new QAction(MainWindow);
        actionMaximize->setObjectName(QStringLiteral("actionMaximize"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/min-max-close/maximize.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMaximize->setIcon(icon1);
        actionMinimize = new QAction(MainWindow);
        actionMinimize->setObjectName(QStringLiteral("actionMinimize"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/min-max-close/minimize.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMinimize->setIcon(icon2);
        actionIdle_Server = new QAction(MainWindow);
        actionIdle_Server->setObjectName(QStringLiteral("actionIdle_Server"));
        actionIdle_Server->setCheckable(true);
        actionIdle_Server->setChecked(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/oxygen/arrow-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIdle_Server->setIcon(icon3);
        actionIdle_Vision = new QAction(MainWindow);
        actionIdle_Vision->setObjectName(QStringLiteral("actionIdle_Vision"));
        actionIdle_Vision->setCheckable(true);
        actionIdle_Vision->setChecked(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/oxygen/layer-visible-on.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIdle_Vision->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(1);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        outerMainToolContainerWg = new QWidget(centralWidget);
        outerMainToolContainerWg->setObjectName(QStringLiteral("outerMainToolContainerWg"));
        horizontalLayout_15 = new QHBoxLayout(outerMainToolContainerWg);
        horizontalLayout_15->setSpacing(1);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(1, 1, 1, 1);
        mainToolsSW = new QStackedWidget(outerMainToolContainerWg);
        mainToolsSW->setObjectName(QStringLiteral("mainToolsSW"));
        mainToolsSW->setMaximumSize(QSize(16777215, 120));
        watchToolsPage_1 = new QWidget();
        watchToolsPage_1->setObjectName(QStringLiteral("watchToolsPage_1"));
        horizontalLayout_4 = new QHBoxLayout(watchToolsPage_1);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(1, 2, 2, 1);
        chooseGameColorAndSideGB = new QGroupBox(watchToolsPage_1);
        chooseGameColorAndSideGB->setObjectName(QStringLiteral("chooseGameColorAndSideGB"));
        verticalLayout_4 = new QVBoxLayout(chooseGameColorAndSideGB);
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(2, 2, 2, 2);
        chooseCyrusColorGB = new QGroupBox(chooseGameColorAndSideGB);
        chooseCyrusColorGB->setObjectName(QStringLiteral("chooseCyrusColorGB"));
        verticalLayout_3 = new QVBoxLayout(chooseCyrusColorGB);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 2, 1);
        chooseTeamColorBlueRB = new QRadioButton(chooseCyrusColorGB);
        chooseTeamColorBlueRB->setObjectName(QStringLiteral("chooseTeamColorBlueRB"));

        verticalLayout_3->addWidget(chooseTeamColorBlueRB);

        chooseTeamColorYellowRB = new QRadioButton(chooseCyrusColorGB);
        chooseTeamColorYellowRB->setObjectName(QStringLiteral("chooseTeamColorYellowRB"));

        verticalLayout_3->addWidget(chooseTeamColorYellowRB);


        verticalLayout_4->addWidget(chooseCyrusColorGB);

        chooseCyrusSideGB = new QGroupBox(chooseGameColorAndSideGB);
        chooseCyrusSideGB->setObjectName(QStringLiteral("chooseCyrusSideGB"));
        horizontalLayout_5 = new QHBoxLayout(chooseCyrusSideGB);
        horizontalLayout_5->setSpacing(1);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(1, 1, 1, 1);
        chooseTeamSideLeftRB = new QRadioButton(chooseCyrusSideGB);
        chooseTeamSideLeftRB->setObjectName(QStringLiteral("chooseTeamSideLeftRB"));

        horizontalLayout_5->addWidget(chooseTeamSideLeftRB);

        pipeBetweenRightAndLeftLbl = new QLabel(chooseCyrusSideGB);
        pipeBetweenRightAndLeftLbl->setObjectName(QStringLiteral("pipeBetweenRightAndLeftLbl"));

        horizontalLayout_5->addWidget(pipeBetweenRightAndLeftLbl);

        chooseTeamSideRightRB = new QRadioButton(chooseCyrusSideGB);
        chooseTeamSideRightRB->setObjectName(QStringLiteral("chooseTeamSideRightRB"));
        chooseTeamSideRightRB->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_5->addWidget(chooseTeamSideRightRB);


        verticalLayout_4->addWidget(chooseCyrusSideGB);


        horizontalLayout_4->addWidget(chooseGameColorAndSideGB);

        chooseVisionSourceGB = new QGroupBox(watchToolsPage_1);
        chooseVisionSourceGB->setObjectName(QStringLiteral("chooseVisionSourceGB"));
        verticalLayout = new QVBoxLayout(chooseVisionSourceGB);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, -1, 2, -1);
        chooseSourceSSLVisionRB = new QRadioButton(chooseVisionSourceGB);
        chooseSourceSSLVisionRB->setObjectName(QStringLiteral("chooseSourceSSLVisionRB"));

        verticalLayout->addWidget(chooseSourceSSLVisionRB);

        chooseSourceCyrusRB = new QRadioButton(chooseVisionSourceGB);
        chooseSourceCyrusRB->setObjectName(QStringLiteral("chooseSourceCyrusRB"));

        verticalLayout->addWidget(chooseSourceCyrusRB);

        chooseSourceGRSimRB = new QRadioButton(chooseVisionSourceGB);
        chooseSourceGRSimRB->setObjectName(QStringLiteral("chooseSourceGRSimRB"));

        verticalLayout->addWidget(chooseSourceGRSimRB);

        chooseSourceLogFileRB = new QRadioButton(chooseVisionSourceGB);
        chooseSourceLogFileRB->setObjectName(QStringLiteral("chooseSourceLogFileRB"));

        verticalLayout->addWidget(chooseSourceLogFileRB);


        horizontalLayout_4->addWidget(chooseVisionSourceGB);

        playLogGB = new QGroupBox(watchToolsPage_1);
        playLogGB->setObjectName(QStringLiteral("playLogGB"));
        playLogGB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        playLogGB->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(playLogGB);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        logStepBackwardTB = new QToolButton(playLogGB);
        logStepBackwardTB->setObjectName(QStringLiteral("logStepBackwardTB"));
        QFont font;
        font.setKerning(true);
        logStepBackwardTB->setFont(font);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/oxygen/media-skip-backward.png"), QSize(), QIcon::Normal, QIcon::Off);
        logStepBackwardTB->setIcon(icon5);
        logStepBackwardTB->setCheckable(false);

        horizontalLayout->addWidget(logStepBackwardTB);

        logPlayTB = new QToolButton(playLogGB);
        logPlayTB->setObjectName(QStringLiteral("logPlayTB"));
        logPlayTB->setFont(font);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/oxygen/media-playback-start.png"), QSize(), QIcon::Normal, QIcon::On);
        logPlayTB->setIcon(icon6);

        horizontalLayout->addWidget(logPlayTB);

        logPauseTB = new QToolButton(playLogGB);
        logPauseTB->setObjectName(QStringLiteral("logPauseTB"));
        logPauseTB->setFont(font);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/oxygen/media-playback-pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        logPauseTB->setIcon(icon7);

        horizontalLayout->addWidget(logPauseTB);

        logStepForwardTB = new QToolButton(playLogGB);
        logStepForwardTB->setObjectName(QStringLiteral("logStepForwardTB"));
        logStepForwardTB->setFont(font);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/oxygen/media-skip-forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        logStepForwardTB->setIcon(icon8);

        horizontalLayout->addWidget(logStepForwardTB);

        logTimeLcd = new QLCDNumber(playLogGB);
        logTimeLcd->setObjectName(QStringLiteral("logTimeLcd"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        logTimeLcd->setFont(font1);
        logTimeLcd->setFrameShape(QFrame::StyledPanel);
        logTimeLcd->setLineWidth(1);
        logTimeLcd->setMidLineWidth(0);
        logTimeLcd->setSmallDecimalPoint(false);
        logTimeLcd->setSegmentStyle(QLCDNumber::Flat);
        logTimeLcd->setProperty("value", QVariant(0));

        horizontalLayout->addWidget(logTimeLcd);


        verticalLayout_2->addLayout(horizontalLayout);

        logSeekPlayingHSl = new QSlider(playLogGB);
        logSeekPlayingHSl->setObjectName(QStringLiteral("logSeekPlayingHSl"));
        logSeekPlayingHSl->setMinimumSize(QSize(150, 0));
        logSeekPlayingHSl->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(logSeekPlayingHSl);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        logFileNameLE = new QLineEdit(playLogGB);
        logFileNameLE->setObjectName(QStringLiteral("logFileNameLE"));

        horizontalLayout_2->addWidget(logFileNameLE);

        logFilebrowseTB = new QToolButton(playLogGB);
        logFilebrowseTB->setObjectName(QStringLiteral("logFilebrowseTB"));
        logFilebrowseTB->setFont(font);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons/oxygen/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        logFilebrowseTB->setIcon(icon9);

        horizontalLayout_2->addWidget(logFilebrowseTB);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_4->addWidget(playLogGB);

        recordLogGB = new QGroupBox(watchToolsPage_1);
        recordLogGB->setObjectName(QStringLiteral("recordLogGB"));
        verticalLayout_5 = new QVBoxLayout(recordLogGB);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        logRecordTB = new QToolButton(recordLogGB);
        logRecordTB->setObjectName(QStringLiteral("logRecordTB"));
        logRecordTB->setFont(font);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icons/oxygen/media-record.png"), QSize(), QIcon::Normal, QIcon::Off);
        logRecordTB->setIcon(icon10);
        logRecordTB->setCheckable(true);

        horizontalLayout_6->addWidget(logRecordTB);

        logSelectStoreFolderTB = new QToolButton(recordLogGB);
        logSelectStoreFolderTB->setObjectName(QStringLiteral("logSelectStoreFolderTB"));
        logSelectStoreFolderTB->setFont(font);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icons/oxygen/document-open-folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        logSelectStoreFolderTB->setIcon(icon11);
        logSelectStoreFolderTB->setCheckable(false);

        horizontalLayout_6->addWidget(logSelectStoreFolderTB);


        verticalLayout_5->addLayout(horizontalLayout_6);

        label = new QLabel(recordLogGB);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);

        logTimeLcd_2 = new QLCDNumber(recordLogGB);
        logTimeLcd_2->setObjectName(QStringLiteral("logTimeLcd_2"));
        logTimeLcd_2->setFont(font1);
        logTimeLcd_2->setFrameShape(QFrame::StyledPanel);
        logTimeLcd_2->setLineWidth(1);
        logTimeLcd_2->setMidLineWidth(0);
        logTimeLcd_2->setSmallDecimalPoint(false);
        logTimeLcd_2->setSegmentStyle(QLCDNumber::Flat);
        logTimeLcd_2->setProperty("value", QVariant(0));

        verticalLayout_5->addWidget(logTimeLcd_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout_4->addWidget(recordLogGB);

        aiGraphicOptionsGB = new QGroupBox(watchToolsPage_1);
        aiGraphicOptionsGB->setObjectName(QStringLiteral("aiGraphicOptionsGB"));
        horizontalLayout_3 = new QHBoxLayout(aiGraphicOptionsGB);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 2, 2, -1);
        fieldGraphicOptionsGB = new QGroupBox(aiGraphicOptionsGB);
        fieldGraphicOptionsGB->setObjectName(QStringLiteral("fieldGraphicOptionsGB"));
        fieldGraphicOptionsGB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        fieldGraphicOptionsGB->setCheckable(false);
        formLayout_3 = new QFormLayout(fieldGraphicOptionsGB);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        fieldGridNumRowsSB = new QSpinBox(fieldGraphicOptionsGB);
        fieldGridNumRowsSB->setObjectName(QStringLiteral("fieldGridNumRowsSB"));
        fieldGridNumRowsSB->setMinimum(1);
        fieldGridNumRowsSB->setMaximum(99);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, fieldGridNumRowsSB);

        showFieldRiskyTilesTB = new QToolButton(fieldGraphicOptionsGB);
        showFieldRiskyTilesTB->setObjectName(QStringLiteral("showFieldRiskyTilesTB"));
        showFieldRiskyTilesTB->setCheckable(true);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, showFieldRiskyTilesTB);

        showFieldGridTB = new QToolButton(fieldGraphicOptionsGB);
        showFieldGridTB->setObjectName(QStringLiteral("showFieldGridTB"));
        showFieldGridTB->setCheckable(true);

        formLayout_3->setWidget(0, QFormLayout::SpanningRole, showFieldGridTB);

        fieldGridNumColumnsSB = new QSpinBox(fieldGraphicOptionsGB);
        fieldGridNumColumnsSB->setObjectName(QStringLiteral("fieldGridNumColumnsSB"));
        fieldGridNumColumnsSB->setMinimum(1);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, fieldGridNumColumnsSB);


        horizontalLayout_3->addWidget(fieldGraphicOptionsGB);

        agentsGraphicOptionsGB = new QGroupBox(aiGraphicOptionsGB);
        agentsGraphicOptionsGB->setObjectName(QStringLiteral("agentsGraphicOptionsGB"));
        agentsGraphicOptionsGB->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        agentsGraphicOptionsGB->setCheckable(false);
        formLayout = new QFormLayout(agentsGraphicOptionsGB);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(2);
        formLayout->setContentsMargins(2, -1, 2, -1);
        showAgentsTargetTB = new QToolButton(agentsGraphicOptionsGB);
        showAgentsTargetTB->setObjectName(QStringLiteral("showAgentsTargetTB"));
        showAgentsTargetTB->setCheckable(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, showAgentsTargetTB);

        showAgentsPathPlanTB = new QToolButton(agentsGraphicOptionsGB);
        showAgentsPathPlanTB->setObjectName(QStringLiteral("showAgentsPathPlanTB"));
        showAgentsPathPlanTB->setCheckable(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, showAgentsPathPlanTB);

        showAgentsTimeOfAccessBallTB = new QToolButton(agentsGraphicOptionsGB);
        showAgentsTimeOfAccessBallTB->setObjectName(QStringLiteral("showAgentsTimeOfAccessBallTB"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icons/oxygen/edit-clear-history.png"), QSize(), QIcon::Normal, QIcon::Off);
        showAgentsTimeOfAccessBallTB->setIcon(icon12);
        showAgentsTimeOfAccessBallTB->setCheckable(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, showAgentsTimeOfAccessBallTB);

        showAgentsOpenAnglesToGoalTB = new QToolButton(agentsGraphicOptionsGB);
        showAgentsOpenAnglesToGoalTB->setObjectName(QStringLiteral("showAgentsOpenAnglesToGoalTB"));
        showAgentsOpenAnglesToGoalTB->setCheckable(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, showAgentsOpenAnglesToGoalTB);

        showAgentVelocityVectorTB = new QToolButton(agentsGraphicOptionsGB);
        showAgentVelocityVectorTB->setObjectName(QStringLiteral("showAgentVelocityVectorTB"));
        showAgentVelocityVectorTB->setCheckable(true);

        formLayout->setWidget(2, QFormLayout::LabelRole, showAgentVelocityVectorTB);


        horizontalLayout_3->addWidget(agentsGraphicOptionsGB);

        ballGraphicOptionsGB = new QGroupBox(aiGraphicOptionsGB);
        ballGraphicOptionsGB->setObjectName(QStringLiteral("ballGraphicOptionsGB"));
        showBallVelocityVectorTB = new QToolButton(ballGraphicOptionsGB);
        showBallVelocityVectorTB->setObjectName(QStringLiteral("showBallVelocityVectorTB"));
        showBallVelocityVectorTB->setGeometry(QRect(10, 30, 23, 25));
        showBallVelocityVectorTB->setCheckable(true);
        showBallOpenAnglesToGoalTB = new QToolButton(ballGraphicOptionsGB);
        showBallOpenAnglesToGoalTB->setObjectName(QStringLiteral("showBallOpenAnglesToGoalTB"));
        showBallOpenAnglesToGoalTB->setGeometry(QRect(40, 30, 23, 25));
        showBallOpenAnglesToGoalTB->setCheckable(true);
        trackBallMaxFrameSB = new QSpinBox(ballGraphicOptionsGB);
        trackBallMaxFrameSB->setObjectName(QStringLiteral("trackBallMaxFrameSB"));
        trackBallMaxFrameSB->setGeometry(QRect(10, 80, 41, 27));
        trackBallMaxFrameLbl = new QLabel(ballGraphicOptionsGB);
        trackBallMaxFrameLbl->setObjectName(QStringLiteral("trackBallMaxFrameLbl"));
        trackBallMaxFrameLbl->setGeometry(QRect(10, 60, 71, 17));

        horizontalLayout_3->addWidget(ballGraphicOptionsGB);


        horizontalLayout_4->addWidget(aiGraphicOptionsGB);

        setColorsGB = new QGroupBox(watchToolsPage_1);
        setColorsGB->setObjectName(QStringLiteral("setColorsGB"));
        formLayout_2 = new QFormLayout(setColorsGB);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(1, -1, 2, -1);
        setColorYellowRobotsLbl = new QLabel(setColorsGB);
        setColorYellowRobotsLbl->setObjectName(QStringLiteral("setColorYellowRobotsLbl"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, setColorYellowRobotsLbl);

        setColorYellowRobotsTB = new QToolButton(setColorsGB);
        setColorYellowRobotsTB->setObjectName(QStringLiteral("setColorYellowRobotsTB"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, setColorYellowRobotsTB);

        setColorBlueRobotsLbl = new QLabel(setColorsGB);
        setColorBlueRobotsLbl->setObjectName(QStringLiteral("setColorBlueRobotsLbl"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, setColorBlueRobotsLbl);

        setColorBlueRobotsTB = new QToolButton(setColorsGB);
        setColorBlueRobotsTB->setObjectName(QStringLiteral("setColorBlueRobotsTB"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, setColorBlueRobotsTB);

        setColorRobotTargetsLbl = new QLabel(setColorsGB);
        setColorRobotTargetsLbl->setObjectName(QStringLiteral("setColorRobotTargetsLbl"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, setColorRobotTargetsLbl);

        setColorRobotTargetsTB = new QToolButton(setColorsGB);
        setColorRobotTargetsTB->setObjectName(QStringLiteral("setColorRobotTargetsTB"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, setColorRobotTargetsTB);

        setColorBallLbl = new QLabel(setColorsGB);
        setColorBallLbl->setObjectName(QStringLiteral("setColorBallLbl"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, setColorBallLbl);

        setColorBallTB = new QToolButton(setColorsGB);
        setColorBallTB->setObjectName(QStringLiteral("setColorBallTB"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, setColorBallTB);

        setColorFieldLbl = new QLabel(setColorsGB);
        setColorFieldLbl->setObjectName(QStringLiteral("setColorFieldLbl"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, setColorFieldLbl);

        setColorFieldTB = new QToolButton(setColorsGB);
        setColorFieldTB->setObjectName(QStringLiteral("setColorFieldTB"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, setColorFieldTB);


        horizontalLayout_4->addWidget(setColorsGB);

        watchToolsPageHS = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(watchToolsPageHS);

        mainToolsSW->addWidget(watchToolsPage_1);
        chooseVisionSourceGB->raise();
        playLogGB->raise();
        aiGraphicOptionsGB->raise();
        setColorsGB->raise();
        chooseGameColorAndSideGB->raise();
        recordLogGB->raise();
        commandToolsPage_2 = new QWidget();
        commandToolsPage_2->setObjectName(QStringLiteral("commandToolsPage_2"));
        testLabel_2 = new QLabel(commandToolsPage_2);
        testLabel_2->setObjectName(QStringLiteral("testLabel_2"));
        testLabel_2->setGeometry(QRect(270, 70, 271, 17));
        mainToolsSW->addWidget(commandToolsPage_2);
        designToolsPage_3 = new QWidget();
        designToolsPage_3->setObjectName(QStringLiteral("designToolsPage_3"));
        testLabel_3 = new QLabel(designToolsPage_3);
        testLabel_3->setObjectName(QStringLiteral("testLabel_3"));
        testLabel_3->setGeometry(QRect(590, 70, 271, 17));
        mainToolsSW->addWidget(designToolsPage_3);
        aiToolsPage_4 = new QWidget();
        aiToolsPage_4->setObjectName(QStringLiteral("aiToolsPage_4"));
        testLabel_4 = new QLabel(aiToolsPage_4);
        testLabel_4->setObjectName(QStringLiteral("testLabel_4"));
        testLabel_4->setGeometry(QRect(590, 50, 271, 17));
        mainToolsSW->addWidget(aiToolsPage_4);
        hardwareToolsPage_5 = new QWidget();
        hardwareToolsPage_5->setObjectName(QStringLiteral("hardwareToolsPage_5"));
        testLabel_5 = new QLabel(hardwareToolsPage_5);
        testLabel_5->setObjectName(QStringLiteral("testLabel_5"));
        testLabel_5->setGeometry(QRect(700, 60, 271, 17));
        mainToolsSW->addWidget(hardwareToolsPage_5);

        horizontalLayout_15->addWidget(mainToolsSW);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        pinMainToolsTB = new QToolButton(outerMainToolContainerWg);
        pinMainToolsTB->setObjectName(QStringLiteral("pinMainToolsTB"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/icons/min-max-close/Arrow-collapse-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pinMainToolsTB->setIcon(icon13);
        pinMainToolsTB->setIconSize(QSize(12, 12));

        verticalLayout_7->addWidget(pinMainToolsTB);


        horizontalLayout_15->addLayout(verticalLayout_7);


        verticalLayout_6->addWidget(outerMainToolContainerWg);

        splitter_1 = new QSplitter(centralWidget);
        splitter_1->setObjectName(QStringLiteral("splitter_1"));
        splitter_1->setOrientation(Qt::Vertical);
        mainWidgetsSW = new QStackedWidget(splitter_1);
        mainWidgetsSW->setObjectName(QStringLiteral("mainWidgetsSW"));
        fieldMainWidget_1_2 = new QWidget();
        fieldMainWidget_1_2->setObjectName(QStringLiteral("fieldMainWidget_1_2"));
        horizontalLayout_7 = new QHBoxLayout(fieldMainWidget_1_2);
        horizontalLayout_7->setSpacing(1);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(1, 1, 1, 1);
        splitter_2 = new QSplitter(fieldMainWidget_1_2);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        fieldContainerWg = new QWidget(splitter_2);
        fieldContainerWg->setObjectName(QStringLiteral("fieldContainerWg"));
        horizontalLayout_12 = new QHBoxLayout(fieldContainerWg);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        fieldContainerLayout = new QVBoxLayout();
        fieldContainerLayout->setSpacing(0);
        fieldContainerLayout->setObjectName(QStringLiteral("fieldContainerLayout"));

        horizontalLayout_12->addLayout(fieldContainerLayout);

        splitter_2->addWidget(fieldContainerWg);
        localRefereeBoxContainterWg = new QWidget(splitter_2);
        localRefereeBoxContainterWg->setObjectName(QStringLiteral("localRefereeBoxContainterWg"));
        horizontalLayout_13 = new QHBoxLayout(localRefereeBoxContainterWg);
        horizontalLayout_13->setSpacing(1);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(1, 1, 1, 1);
        textEdit_2 = new QTextEdit(localRefereeBoxContainterWg);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        horizontalLayout_13->addWidget(textEdit_2);

        splitter_2->addWidget(localRefereeBoxContainterWg);
        messageDisplayingContainerWg = new QWidget(splitter_2);
        messageDisplayingContainerWg->setObjectName(QStringLiteral("messageDisplayingContainerWg"));
        horizontalLayout_14 = new QHBoxLayout(messageDisplayingContainerWg);
        horizontalLayout_14->setSpacing(1);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(1, 1, 1, 1);
        messengerLayout = new QVBoxLayout();
        messengerLayout->setSpacing(6);
        messengerLayout->setObjectName(QStringLiteral("messengerLayout"));

        horizontalLayout_14->addLayout(messengerLayout);

        splitter_2->addWidget(messageDisplayingContainerWg);

        horizontalLayout_7->addWidget(splitter_2);

        mainWidgetsSW->addWidget(fieldMainWidget_1_2);
        designMainWidget_3 = new QWidget();
        designMainWidget_3->setObjectName(QStringLiteral("designMainWidget_3"));
        horizontalLayout_9 = new QHBoxLayout(designMainWidget_3);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        design_script_Splitter = new QSplitter(designMainWidget_3);
        design_script_Splitter->setObjectName(QStringLiteral("design_script_Splitter"));
        design_script_Splitter->setOrientation(Qt::Horizontal);
        scriptDirectoryTreeWg = new QTreeWidget(design_script_Splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        scriptDirectoryTreeWg->setHeaderItem(__qtreewidgetitem);
        scriptDirectoryTreeWg->setObjectName(QStringLiteral("scriptDirectoryTreeWg"));
        design_script_Splitter->addWidget(scriptDirectoryTreeWg);
        scriptEditorTWg = new QTabWidget(design_script_Splitter);
        scriptEditorTWg->setObjectName(QStringLiteral("scriptEditorTWg"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        scriptEditorTWg->addTab(tab, QString());
        design_script_Splitter->addWidget(scriptEditorTWg);
        designFieldContainerWg = new QWidget(design_script_Splitter);
        designFieldContainerWg->setObjectName(QStringLiteral("designFieldContainerWg"));
        design_script_Splitter->addWidget(designFieldContainerWg);

        horizontalLayout_9->addWidget(design_script_Splitter);

        mainWidgetsSW->addWidget(designMainWidget_3);
        aiMainWidget_4 = new QWidget();
        aiMainWidget_4->setObjectName(QStringLiteral("aiMainWidget_4"));
        horizontalLayout_10 = new QHBoxLayout(aiMainWidget_4);
        horizontalLayout_10->setSpacing(1);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 1, 1, 1);
        aiTree_tab_Splitter = new QSplitter(aiMainWidget_4);
        aiTree_tab_Splitter->setObjectName(QStringLiteral("aiTree_tab_Splitter"));
        aiTree_tab_Splitter->setOrientation(Qt::Horizontal);
        aiMainTreeWg = new QTreeWidget(aiTree_tab_Splitter);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        aiMainTreeWg->setHeaderItem(__qtreewidgetitem1);
        aiMainTreeWg->setObjectName(QStringLiteral("aiMainTreeWg"));
        aiTree_tab_Splitter->addWidget(aiMainTreeWg);
        aiMainTabWg = new QTabWidget(aiTree_tab_Splitter);
        aiMainTabWg->setObjectName(QStringLiteral("aiMainTabWg"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        aiMainTabWg->addTab(tab_2, QString());
        aiTree_tab_Splitter->addWidget(aiMainTabWg);

        horizontalLayout_10->addWidget(aiTree_tab_Splitter);

        mainWidgetsSW->addWidget(aiMainWidget_4);
        hardwareMainWidget_5 = new QWidget();
        hardwareMainWidget_5->setObjectName(QStringLiteral("hardwareMainWidget_5"));
        horizontalLayout_11 = new QHBoxLayout(hardwareMainWidget_5);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        testTextEdit_1 = new QTextEdit(hardwareMainWidget_5);
        testTextEdit_1->setObjectName(QStringLiteral("testTextEdit_1"));

        horizontalLayout_11->addWidget(testTextEdit_1);

        mainWidgetsSW->addWidget(hardwareMainWidget_5);
        splitter_1->addWidget(mainWidgetsSW);
        plotsContainerWg = new QWidget(splitter_1);
        plotsContainerWg->setObjectName(QStringLiteral("plotsContainerWg"));
        plotterLayout = new QHBoxLayout(plotsContainerWg);
        plotterLayout->setSpacing(6);
        plotterLayout->setContentsMargins(11, 11, 11, 11);
        plotterLayout->setObjectName(QStringLiteral("plotterLayout"));
        plotterLayout->setContentsMargins(1, 1, 1, 1);
        splitter_1->addWidget(plotsContainerWg);

        verticalLayout_6->addWidget(splitter_1);

        MainWindow->setCentralWidget(centralWidget);
        mainMenuToolBar = new QToolBar(MainWindow);
        mainMenuToolBar->setObjectName(QStringLiteral("mainMenuToolBar"));
        mainMenuToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainMenuToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        windowButtonsToolBar = new QToolBar(MainWindow);
        windowButtonsToolBar->setObjectName(QStringLiteral("windowButtonsToolBar"));
        windowButtonsToolBar->setLayoutDirection(Qt::RightToLeft);
        windowButtonsToolBar->setMovable(false);
        windowButtonsToolBar->setIconSize(QSize(24, 16));
        MainWindow->addToolBar(Qt::TopToolBarArea, windowButtonsToolBar);

        mainMenuToolBar->addAction(actionWatch);
        mainMenuToolBar->addAction(actionCommnad);
        mainMenuToolBar->addAction(actionDesign);
        mainMenuToolBar->addAction(actionAI);
        mainMenuToolBar->addAction(actionHardware);
        windowButtonsToolBar->addAction(actionQuit);
        windowButtonsToolBar->addAction(actionMaximize);
        windowButtonsToolBar->addAction(actionMinimize);
        windowButtonsToolBar->addAction(actionIdle_Server);
        windowButtonsToolBar->addAction(actionIdle_Vision);

        retranslateUi(MainWindow);

        mainToolsSW->setCurrentIndex(4);
        mainWidgetsSW->setCurrentIndex(0);
        scriptEditorTWg->setCurrentIndex(0);
        aiMainTabWg->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Cyrus Team Manager", 0));
        actionWatch->setText(QApplication::translate("MainWindow", "Watch", 0));
        actionCommnad->setText(QApplication::translate("MainWindow", "Commnad", 0));
        actionDesign->setText(QApplication::translate("MainWindow", "Design", 0));
        actionAI->setText(QApplication::translate("MainWindow", "AI", 0));
        actionHardware->setText(QApplication::translate("MainWindow", "Hardware", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionMaximize->setText(QApplication::translate("MainWindow", "maximize", 0));
        actionMinimize->setText(QApplication::translate("MainWindow", "minimize", 0));
        actionIdle_Server->setText(QApplication::translate("MainWindow", "Idle Server", 0));
        actionIdle_Vision->setText(QApplication::translate("MainWindow", "Idle Vision", 0));
        chooseGameColorAndSideGB->setTitle(QApplication::translate("MainWindow", "Game", 0));
        chooseCyrusColorGB->setTitle(QApplication::translate("MainWindow", "Cyrus Color", 0));
        chooseTeamColorBlueRB->setText(QApplication::translate("MainWindow", "Blue", 0));
        chooseTeamColorYellowRB->setText(QApplication::translate("MainWindow", "Yellow", 0));
        chooseCyrusSideGB->setTitle(QApplication::translate("MainWindow", "Cyrus Side", 0));
        chooseTeamSideLeftRB->setText(QApplication::translate("MainWindow", "Left", 0));
        pipeBetweenRightAndLeftLbl->setText(QApplication::translate("MainWindow", "|", 0));
        chooseTeamSideRightRB->setText(QApplication::translate("MainWindow", "Right", 0));
        chooseVisionSourceGB->setTitle(QApplication::translate("MainWindow", "Vision Sorce", 0));
        chooseSourceSSLVisionRB->setText(QApplication::translate("MainWindow", "SSL Vision", 0));
        chooseSourceCyrusRB->setText(QApplication::translate("MainWindow", "Cyrus ", 0));
        chooseSourceGRSimRB->setText(QApplication::translate("MainWindow", "grSim", 0));
        chooseSourceLogFileRB->setText(QApplication::translate("MainWindow", "Log File", 0));
        playLogGB->setTitle(QApplication::translate("MainWindow", "Play Log", 0));
        logStepBackwardTB->setText(QApplication::translate("MainWindow", "...", 0));
        logPlayTB->setText(QApplication::translate("MainWindow", "...", 0));
        logPauseTB->setText(QApplication::translate("MainWindow", "...", 0));
        logStepForwardTB->setText(QApplication::translate("MainWindow", "...", 0));
        logFilebrowseTB->setText(QApplication::translate("MainWindow", "...", 0));
        recordLogGB->setTitle(QApplication::translate("MainWindow", "Record", 0));
        logRecordTB->setText(QApplication::translate("MainWindow", "...", 0));
        logSelectStoreFolderTB->setText(QApplication::translate("MainWindow", "...", 0));
        label->setText(QApplication::translate("MainWindow", "Time:", 0));
        aiGraphicOptionsGB->setTitle(QApplication::translate("MainWindow", "AI Graphic Options", 0));
        fieldGraphicOptionsGB->setTitle(QApplication::translate("MainWindow", "Field", 0));
        showFieldRiskyTilesTB->setText(QApplication::translate("MainWindow", "...", 0));
        showFieldGridTB->setText(QApplication::translate("MainWindow", "Show Grids", 0));
        agentsGraphicOptionsGB->setTitle(QApplication::translate("MainWindow", "Agents", 0));
        showAgentsTargetTB->setText(QApplication::translate("MainWindow", "...", 0));
        showAgentsPathPlanTB->setText(QApplication::translate("MainWindow", "...", 0));
#ifndef QT_NO_TOOLTIP
        showAgentsTimeOfAccessBallTB->setToolTip(QApplication::translate("MainWindow", "Show the time agents need to get ball", 0));
#endif // QT_NO_TOOLTIP
        showAgentsTimeOfAccessBallTB->setText(QApplication::translate("MainWindow", "...", 0));
#ifndef QT_NO_TOOLTIP
        showAgentsOpenAnglesToGoalTB->setToolTip(QApplication::translate("MainWindow", "Show open angles to goal", 0));
#endif // QT_NO_TOOLTIP
        showAgentsOpenAnglesToGoalTB->setText(QApplication::translate("MainWindow", "...", 0));
        showAgentVelocityVectorTB->setText(QApplication::translate("MainWindow", "...", 0));
        ballGraphicOptionsGB->setTitle(QApplication::translate("MainWindow", "Ball", 0));
        showBallVelocityVectorTB->setText(QApplication::translate("MainWindow", "...", 0));
        showBallOpenAnglesToGoalTB->setText(QApplication::translate("MainWindow", "...", 0));
        trackBallMaxFrameLbl->setText(QApplication::translate("MainWindow", "Track Ball", 0));
        setColorsGB->setTitle(QApplication::translate("MainWindow", "Set Colors", 0));
        setColorYellowRobotsLbl->setText(QApplication::translate("MainWindow", "Yellow Robots", 0));
        setColorYellowRobotsTB->setText(QApplication::translate("MainWindow", "...", 0));
        setColorBlueRobotsLbl->setText(QApplication::translate("MainWindow", "Blue Robots", 0));
        setColorBlueRobotsTB->setText(QApplication::translate("MainWindow", "...", 0));
        setColorRobotTargetsLbl->setText(QApplication::translate("MainWindow", "Targets", 0));
        setColorRobotTargetsTB->setText(QApplication::translate("MainWindow", "...", 0));
        setColorBallLbl->setText(QApplication::translate("MainWindow", "Ball", 0));
        setColorBallTB->setText(QApplication::translate("MainWindow", "...", 0));
        setColorFieldLbl->setText(QApplication::translate("MainWindow", "Field", 0));
        setColorFieldTB->setText(QApplication::translate("MainWindow", "...", 0));
        testLabel_2->setText(QApplication::translate("MainWindow", "Command Tab: under construction", 0));
        testLabel_3->setText(QApplication::translate("MainWindow", "Design Tab: under construction", 0));
        testLabel_4->setText(QApplication::translate("MainWindow", "AI Tab: under construction", 0));
        testLabel_5->setText(QApplication::translate("MainWindow", "Hardware Tab: under construction", 0));
        pinMainToolsTB->setText(QApplication::translate("MainWindow", "...", 0));
        textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">refereebox container</span></p></body></html>", 0));
        scriptEditorTWg->setTabText(scriptEditorTWg->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0));
        aiMainTabWg->setTabText(aiMainTabWg->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 1", 0));
        testTextEdit_1->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Temporal for Hardware page</span></p></body></html>", 0));
        windowButtonsToolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
