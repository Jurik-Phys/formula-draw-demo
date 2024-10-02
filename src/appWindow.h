// Begin appWindow.h

#include <QApplication>
#include <QWidget>

class QAppWindow : public QWidget {

    Q_OBJECT

    public:
        QAppWindow(QWidget *parent = 0);
        ~QAppWindow();
};

// End appWindow.h
