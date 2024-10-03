#include "appWindow.h"
#include "latex.h"

int main(int argc, char** argv){

    QApplication app(argc, argv);

    tex::LaTeX::init();
    QAppWindow appWindow;
    appWindow.show();
    int retn = app.exec();

    tex::LaTeX::release();
    return retn;
}
