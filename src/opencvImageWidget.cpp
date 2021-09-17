/*
    @file opencvImageWidget.cpp
    @author Ahmet Furkan YENİPINAR
    @version 0.1 0
*/

#include "opencvImageWidget.h"
#include <QImage>

OpencvImageViewer::OpencvImageViewer()
{
		this->cap = cv::VideoCapture("/dev/video0");
}

std::vector<std::string> OpencvImageViewer::listCameras()
{
	unsigned short int maxCamNumber = 300;
	unsigned short int camCounter = 0;
	std::vector<std::string> availableCameras;

	while(camCounter < maxCamNumber)
	{
		std::string camSourceName = "/dev/video" + std::to_string(camCounter);
		cv::VideoCapture cap(camSourceName);
		try
		{
			if(cap.isOpened())
			{
				std::cout << "The opened cam name is " << camSourceName << std::endl;
				availableCameras.push_back(camSourceName);
			}
		}
		catch(const char* msg)
		{
			std::cout << "Error Caught!!" << std::endl;
		}
		camCounter += 1;
	}
	return availableCameras;
}

void OpencvImageViewer::captureVideo()
{
	cv::Mat frame;
	QLabel *imageLabel = new QLabel;

	if(!this->cap.isOpened())
	{
		std::cout << "Error opening video stream" << std::endl;
  	}
    this->cap.read(frame);

    if (frame.empty()) {
        std::cerr << "ERROR! blank frame grabbed\n";
    }
		cv::Mat converted;
    cv::cvtColor(frame, converted, cv::COLOR_BGR2RGB);
    QImage result = QImage((const unsigned char*)(converted.data),
                           converted.cols, converted.rows, QImage::Format_RGB888);
		this->setPixmap(QPixmap::fromImage(result));
}

OpencvImageViewer::~OpencvImageViewer()
{

}
