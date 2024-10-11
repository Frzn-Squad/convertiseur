#include <QApplication>
#include "mainwindow.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv); // Create a QApplication object
    MaFenetre maFenetre; // Create a window object
    maFenetre.show(); // Show the window
    int ret = app.exec(); // Execute the main event loop
    return ret;
}
