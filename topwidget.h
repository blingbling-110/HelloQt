#ifndef TOPWIDGET_H
#define TOPWIDGET_H

#include <QWidget>

namespace Ui {
class TopWidget;
}

class TopWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TopWidget(QWidget *parent = 0);
    ~TopWidget();

private slots:
    void on_pushButtonClose_clicked();
    void on_pushButtonHide_clicked();
    void on_pushButtonMax_clicked();
    void mouseDoubleClickEvent(QMouseEvent *event);

private:
    Ui::TopWidget *ui;
};

#endif // TOPWIDGET_H
