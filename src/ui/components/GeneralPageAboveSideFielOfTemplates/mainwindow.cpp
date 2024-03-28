#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "generalpageabovesidefieloftemplates.cpp"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    m_centralWidgetTemplates = new Templates();
    this -> setCentralWidget(m_centralWidgetTemplates);

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

