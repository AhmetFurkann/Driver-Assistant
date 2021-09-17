#ifndef RIGHTSIDECONTAINER_H
#define RIGHTSIDECONTAINER_H

#include <QtWidgets>

class RightSideContainer : public QWidget
{
    Q_OBJECT
public:
	  QGridLayout *mainLayout;
    QPushButton *openButton;
    QPushButton *closeButton;
    QLabel *controllerPlaceHolder;

    explicit RightSideContainer();
    ~RightSideContainer();
};

#endif // MAINWIDGET_H
