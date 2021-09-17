/*
    @file mainContainer.cpp
    @author Ahmet Furkan YENİPINAR
    @version 0.1 0
*/

#include "mainContainer.h"
#include <iostream>
#include <QDebug>

MainContainer::MainContainer(QWidget *parent) :
    QWidget(parent)
{
   MainContainer::mainLayout = new QGridLayout;

   // Adjusting the color of the Main Container Layout.
   auto palette = this->palette();
   palette.setColor(QPalette::Window, Qt::darkGray);
   this->setPalette(palette);

   setLayout(MainContainer::mainLayout);
   setWindowTitle(tr("Driver Assistant"));
}

MainContainer::~MainContainer()
{

}
