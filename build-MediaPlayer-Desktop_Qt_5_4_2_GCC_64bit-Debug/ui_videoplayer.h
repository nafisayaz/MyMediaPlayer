/********************************************************************************
** Form generated from reading UI file 'videoplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPLAYER_H
#define UI_VIDEOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoPlayer
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionVersion;
    QAction *actionAbout;
    QWidget *centralWidget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *VideoPlayer)
    {
        if (VideoPlayer->objectName().isEmpty())
            VideoPlayer->setObjectName(QStringLiteral("VideoPlayer"));
        VideoPlayer->resize(634, 345);
        actionOpen = new QAction(VideoPlayer);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionExit = new QAction(VideoPlayer);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionVersion = new QAction(VideoPlayer);
        actionVersion->setObjectName(QStringLiteral("actionVersion"));
        actionAbout = new QAction(VideoPlayer);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(VideoPlayer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        VideoPlayer->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(VideoPlayer);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VideoPlayer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VideoPlayer);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VideoPlayer->setStatusBar(statusBar);
        menuBar = new QMenuBar(VideoPlayer);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 634, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        VideoPlayer->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionExit);

        retranslateUi(VideoPlayer);

        QMetaObject::connectSlotsByName(VideoPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *VideoPlayer)
    {
        VideoPlayer->setWindowTitle(QApplication::translate("VideoPlayer", "VideoPlayer", 0));
        actionOpen->setText(QApplication::translate("VideoPlayer", "Open", 0));
        actionExit->setText(QApplication::translate("VideoPlayer", "Exit", 0));
        actionVersion->setText(QApplication::translate("VideoPlayer", "Version", 0));
        actionAbout->setText(QApplication::translate("VideoPlayer", "About", 0));
        menuFile->setTitle(QApplication::translate("VideoPlayer", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class VideoPlayer: public Ui_VideoPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPLAYER_H
