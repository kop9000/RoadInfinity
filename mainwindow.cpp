#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
//{
    //ui->setupUi(this);
    //QPixmap pix("C:\\Users\\TBOIR\\Desktop\\infinity road\\1.jpg"); // This is a bit more tricky

    //int w = ui->label1->width();
    //int h = ui->label1->height();

    //ui->label1->setPixmap(pix.scaled(w,h,Qt::IgnoreAspectRatio));
//}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}
