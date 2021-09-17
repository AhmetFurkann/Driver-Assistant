/*
    @file main.cpp
    @author Ahmet Furkan YENİPINAR
    @version 0.1 0
*/

#include <QtWidgets>
#include <QObject>
#include <QtCore>

#include "bottomSideContainer.h"
#include "rightSideContainer.h"
#include "opencvImageWidget.h"
#include "cameraController.h"
#include "mainContainer.h"

#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainContainer mainContainer;

    OpencvImageViewer *imageViewer = new OpencvImageViewer;
    RightSideContainer *rSideContainer = new RightSideContainer();
    BottomSideContainer *bSideContainer = new BottomSideContainer();

    CameraController *cameraController = new CameraController(imageViewer, rSideContainer);

    mainContainer.mainLayout->addWidget(imageViewer, 0, 0, 1, 1);
    mainContainer.mainLayout->addWidget(rSideContainer, 0, 1, 1, 1);
    mainContainer.mainLayout->addWidget(bSideContainer, 1, 0, 1, 2);

    mainContainer.setMinimumSize(1000, 600);
    mainContainer.show();
    return a.exec();
}
