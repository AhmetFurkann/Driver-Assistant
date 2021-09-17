#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QtWidgets>
#include <QWidget>
#include <QLabel>

class MainContainer : public QWidget
{
  Q_OBJECT

public:
	QGridLayout *mainLayout;
  explicit MainContainer(QWidget *parent = 0);
  ~MainContainer();
};

#endif // MAINWIDGET_H
