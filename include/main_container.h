#ifndef MAINCONTAINER_H
#define MAINCONTAINER_H

#include <QWidget>
#include <QHBoxLayout>

// This is the declaration of our MainWidget class
// The definition/implementation is in mainwidget.cpp
class MainContainer : public QHBoxLayout
{

public:
    explicit MainContainer(QWidget *parent = 0); //Constructor
    ~MainContainer(); // Destructor

};

#endif // MAINCONTAINER_H
