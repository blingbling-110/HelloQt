#include "topwidget.h"
#include "ui_topwidget.h"

TopWidget::TopWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TopWidget)
{
    ui->setupUi(this);
}

TopWidget::~TopWidget()
{
    delete ui;
}

//关闭按钮
void TopWidget::on_pushButtonClose_clicked()
{
    this->window()->close();
}

//隐藏按钮
void TopWidget::on_pushButtonHide_clicked()
{
    this->window()->showMinimized();
}

//最大化按钮
void TopWidget::on_pushButtonMax_clicked()
{
    if (this->window()->isMaximized()) {
        this->window()->showNormal();
        ui->pushButtonMax->setStyleSheet("QPushButton{border-image: url(:/res/res/image/maximize.svg);}"
                                         "QPushButton:hover{border-image: url(:/res/res/image/maximize_hover.svg);}"
                                         "QPushButton:pressed{border-image: url(:/res/res/image/maximize_pressed.svg);}");
    }else {
        this->window()->showMaximized();
        ui->pushButtonMax->setStyleSheet("QPushButton{border-image: url(:/res/res/image/minimize.svg);}"
                                         "QPushButton:hover{border-image: url(:/res/res/image/minimize_hover.svg);}"
                                         "QPushButton:pressed{border-image: url(:/res/res/image/minimize_pressed.svg);}");
    }
}

//双击标题栏最大化或最小化
void TopWidget::mouseDoubleClickEvent(QMouseEvent *event)
{
    this->on_pushButtonMax_clicked();
}
