#include "mainwindow.h"

#include <QWidget>
#include <QPainter>
#include <QApplication>
#include "qwidgetdraw.h"
#include "QVBoxLayout"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //事件的处理
    //信号与槽处理
    //均在此函数执行后启动
    QWidget *dempWidgetMain = new QWidget();
    QWidgetDraw *draw = new QWidgetDraw(nullptr,1);
    QWidgetDraw *draw1 = new QWidgetDraw(nullptr, 2);
    QVBoxLayout *vlayoutMain = new QVBoxLayout();
    vlayoutMain->addWidget(draw);
    vlayoutMain->addWidget(draw1);
    dempWidgetMain->resize(1000, 800);
    dempWidgetMain->setWindowTitle("X战队陈学伟2017080701");
    dempWidgetMain->setLayout(vlayoutMain);
    dempWidgetMain->show();
    return a.exec();
}
