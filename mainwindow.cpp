#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint | windowFlags());//设置窗口标志为无边框
}

MainWindow::~MainWindow()
{
    delete ui;
}

//根据鼠标单击事件获取鼠标左键被按下时的鼠标位置
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        this->m_bPressed = true;
        this->m_point = event->pos();
    }
}

//根据鼠标移动事件移动窗口
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (m_bPressed)
        this->move(event->pos() - m_point + this->pos());
}

//根据鼠标释放事件停止窗口移动
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    this->m_bPressed = false;
}
