#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainlooper.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    (new MainLooper())->startLoop();
}

MainWindow::~MainWindow()
{
    delete ui;
}
