#include "capp.h"
#include "./ui_capp.h"

CApp::CApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CApp)
{
    ui->setupUi(this);
}

CApp::~CApp()
{
    delete ui;
}

