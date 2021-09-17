/*
    @file rightSideContainer.cpp
    @author Ahmet Furkan YENİPINAR
    @version 0.1 0
*/

#include "rightSideContainer.h"

RightSideContainer::RightSideContainer()
{
  mainLayout = new QGridLayout();

  openButton = new QPushButton("Open Camera");
  closeButton = new QPushButton("Close Camera");
  controllerPlaceHolder = new QLabel("--Right Side Controller--");
  controllerPlaceHolder->setAlignment(Qt::AlignCenter);

  // Adjusting the color of right side container.
  auto palette = this->palette();
  palette.setColor(QPalette::Background, Qt::gray);
  this->setAutoFillBackground(true);
  this->setPalette(palette);

  mainLayout->addWidget(openButton, 0,0,1,1);
  mainLayout->addWidget(closeButton, 0,1,1,1);
  mainLayout->addWidget(controllerPlaceHolder, 1,0,1,2);
  this->setLayout(mainLayout);
}

RightSideContainer::~RightSideContainer(){

}
