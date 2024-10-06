#include "appWindow.h"
#include "microtex.h"

void initQt() {
    microtex::PlatformFactory::registerFactory(
        "qt",
        std::make_unique<microtex::PlatformFactory_qt>()
      );
      microtex::PlatformFactory::activate("qt");
}

int main(int argc, char** argv){

    QApplication app(argc, argv);

    const microtex::FontSrcFile math{argv[1], argv[2]};
    microtex::MicroTeX::init(math);

    initQt();

    QAppWindow appWindow;
    appWindow.show();
    int retn = app.exec();

    microtex::MicroTeX::release();
    return retn;
}
