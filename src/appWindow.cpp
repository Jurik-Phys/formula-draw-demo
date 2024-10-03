// Begin appWindow.cpp

#include "appWindow.h"
#include "qt_texwidget.h"

QAppWindow::QAppWindow(QWidget *parent) : QWidget(parent) {
    this->resize(800,350);
    this->setWindowTitle("Qt draw formula demo");

    // main layout for window
    QHBoxLayout* layout = new QHBoxLayout;

    QLabel* label = new QLabel("Change some text of your life");
    layout->addWidget(label);

    int text_size = 20;
    // the TeX widget is on the left
    _texwidget = new TeXWidget(nullptr, text_size);
    _texwidget->setMinimumWidth(120);

    layout->addWidget(_texwidget);

    setLayout(layout);

    // QString text = "\\textbf{Hello, World! $2^2 = 4$ \\textbf{Привет, Мир!} }";
    QString text = "\\mathbf{\\mbox{привет мир}\\mbox{Hello, World!}\\mbox{2^2=4}}";
    _texwidget->setLaTeX(text.toStdWString());
}

QAppWindow::~QAppWindow(){
}

// End appWindow.cpp
