#ifndef QWIDGETDRAW_H
#define QWIDGETDRAW_H

#include <QWidget>
#include <QLabel>

class QWidgetDraw : public QWidget
{
    Q_OBJECT
public:
    QPixmap *map;
    QTimer *timer;
    int pointX = 0;
    int pointY = 0;
    int dir = 0;
    int cnt = 0;
    int x = 0;
    int y = 0;
    int num = 0;
    int lastData = 0;
    QWidgetDraw(QWidget *parent, int type);
    void draw(QPainter *painter);
    void drawDemo(QPainter *painter);
    void drawTriangle(QPainter *painter);
     void drawTriangleNew(QPainter *painter);
    void refresh();
    void drawWaveFromArray(QPainter *painter);
    void drawWave(QPainter *painter, int data);
    void paintEvent(QPaintEvent *event);
    void sendData();
    void refreshFormData(int data);
    void drawSinWave(QPainter *painter);

signals:
    void rxDataSignal(int data);
};

#endif // QWIDGETDRAW_H
