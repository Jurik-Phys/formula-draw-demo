// Begin appWindow.cpp

#include "appWindow.h"

QAppWindow::QAppWindow(QWidget *parent) : QWidget(parent) {
    this->resize(800,350);
    this->setWindowTitle("Qt draw formula demo");
}

QAppWindow::~QAppWindow(){
}


// End appWindow.cpp
