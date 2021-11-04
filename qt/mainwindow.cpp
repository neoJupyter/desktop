#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWebEngineView(parent)
{
    setPage(new WebEnginePage(this));
}

MainWindow::~MainWindow()
{
}

