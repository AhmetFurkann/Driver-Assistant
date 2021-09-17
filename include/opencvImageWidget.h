#ifndef OPENCVIMAGEWIDGET_H
#define OPENCVIMAGEWIDGET_H

#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <QWidget>
#include <QObject>
#include <QtCore>
#include <QImage>
#include <QLabel>
#include <QTimer>

#include <iostream>

class OpencvImageViewer : public QLabel
{
  Q_OBJECT
public:
  explicit OpencvImageViewer();
  std::vector<std::string> listCameras();
  ~OpencvImageViewer();
  cv::VideoCapture cap;

public slots:
  void captureVideo();
};

#endif //OPENCVIMAGEWIDGET_H
