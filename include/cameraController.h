#ifndef CAMERACONTROLLER_H
#define CAMERACONTROLLER_H

#include "rightSideContainer.h"
#include "opencvImageWidget.h"

#include <QtWidgets>
#include <QThread>

#include <thread>
#include <string>

class CameraController : public QWidget
{
  Q_OBJECT
public:
  explicit CameraController(OpencvImageViewer *imageViewer, RightSideContainer *sideContainer);
  ~CameraController();
  void stopCamera();
  void startRefreshCamera();
  bool continueRefreshing();
  std::thread cameraThread;
  bool cameraControlFlag {false};

private:
  OpencvImageViewer *imageViewer;
  RightSideContainer *sideContainer;

public slots:
  void startCamera();
  void stopRefreshing();
};

#endif // CAMERACONTROLLER_H
