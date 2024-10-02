#include "appWindow.h"

int main(int argc, char** argv){

    QApplication app(argc, argv);

    QAppWindow appWindow;
    appWindow.show();

    return app.exec();
}
