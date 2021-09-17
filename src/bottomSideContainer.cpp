/*
    @file bottomSideContainer.cpp
    @author Ahmet Furkan YENİPINAR
    @version 0.1 0
*/

#include "bottomSideContainer.h"

BottomSideContainer::BottomSideContainer()
{
  bSideLayout = new QGridLayout();

  //Adjusting color of the BottomSideContainer color.
  auto palette = this->palette();
  palette.setColor(QPalette::Background, Qt::gray);
  this->setAutoFillBackground(true);
  this->setPalette(palette);

  placeHolderLabel = new QLabel("-- Controller Place --");
  placeHolderLabel->setAlignment(Qt::AlignCenter);
  bSideLayout->addWidget(placeHolderLabel);
  this->setLayout(bSideLayout);
}

BottomSideContainer::~BottomSideContainer()
{

}
