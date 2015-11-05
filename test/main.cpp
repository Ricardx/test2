#include "dialog.h"
#include <QApplication>
#include <QGraphicsView>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QGraphicsScene scene;
    QGraphicsView view(&scene);
    QGraphicsPixmapItem item(QPixmap("Proyecto-Background.png"));
    scene.addItem(&item);    
    view.show();
    Dialog w;
    w.showNormal();

    return a.exec();
}
