#include "dialog.h"
#include "ui_dialog.h"
#include <QTime>
#include <QTimer>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //scene = new QGraphicsScene(this);
    //ui->graphicsView->setScene(scene);

    QBrush redBrush(Qt::red);
    QBrush greenBrush(Qt::green);
    QPen blackpen(Qt::black);
    blackpen.setWidth(6);

    //ellipse = scene->addEllipse(300,300,100,100,blackpen,redBrush);
    //ellipse = scene->addEllipse(400,400,50,50,blackpen,greenBrush);
    //ellipse = scene->addEllipse(800,800,50,50,blackpen,greenBrush);

    x=1470;
    y=390;
    x1=160;
    y1=470;
    QTimer *time = new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(moveAve1()));
    time->start(60);

}

int Dialog::initX()
{
    return 1470;
}

int Dialog::initY()
{
    return 390;
}

int Dialog::finalX()
{
    return 160;
}

int Dialog::finaY()
{
    return 410;
}

void Dialog::moveAve1()
{
    x-=10;
    y+=0;
    x1+=10;
    y1+=0;
    if(x>0 && x1 <1470){
    ui->label->move(QPoint(x,y));
    ui->label_2->move(QPoint(x1,y1));
    }else{
        x=1470;
        y=390;
        x1=160;
        y1=470;
        ui->label->move(QPoint(x,y));
        ui->label_2->move(QPoint(x1,y1));
    }
}


Dialog::~Dialog()
{
    delete ui;
}

