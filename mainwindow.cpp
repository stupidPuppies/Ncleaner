#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->setText(ui->pushButton->text()+QString("Hello~~~"));
    ui->listWidget->addItem(QString("Hello!!!"));
}

void MainWindow::on_pushButton_2_pressed()
{
    ui->pushButton_2->setText(QString("fuck you vs "));
}
