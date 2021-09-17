/*
    @file cameraController.cpp
    @author Ahmet Furkan YENİPINAR
    @version 0.1 0
*/

#include "cameraController.h"

CameraController::CameraController(OpencvImageViewer *imageViewer, RightSideContainer *sideContainer)
{
  this->imageViewer = imageViewer;
  this->sideContainer = sideContainer;

  connect(this->sideContainer->openButton, SIGNAL(clicked()), this, SLOT(startCamera()));
  connect(this->sideContainer->closeButton, SIGNAL(clicked()), this, SLOT(stopRefreshing()));
}

void CameraController::startCamera()
{
  this->cameraControlFlag = true;
  if (!this->cameraThread.joinable())
    this->cameraThread = std::thread(&CameraController::startRefreshCamera, this);
}

void CameraController::startRefreshCamera()
{
  while(this->continueRefreshing())
  {
    this->imageViewer->captureVideo();
  }
}

void CameraController::stopRefreshing()
{
  {
    std::lock_guard<std::mutex> lock( std::mutex );
    this->cameraControlFlag = false;
  }
  if (this->cameraThread.joinable())
    this->cameraThread.join();
}

bool CameraController::continueRefreshing(){
  std::lock_guard<std::mutex> lock( std::mutex );
  return this->cameraControlFlag;
}

CameraController::~CameraController(){

}
