#include "mainwindow.h"
#include <QApplication>

void MvScene::keyPressEvent(QKeyEvent * keyEvent)
{
    switch (keyEvent->key()) {
        case Qt::Key_Left:
        tank-> rotate(-90);
       .
       .
       .
       .
        case Qt::Key_Down:

            tank->rotate(180);
            break;
    }

{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
