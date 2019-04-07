#include "chart.h"
#include <QtCharts/QAbstractAxis>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QValueAxis>
#include <QTime>
#include <QDebug>

Chart::Chart(QGraphicsItem *parent, Qt::WindowFlags wFlags):
    QChart(QChart::ChartTypeCartesian, parent, wFlags),
    m_series(0),
    m_axis(new QValueAxis),
    m_step(0),
    m_x(5),
    m_y(1)
{
    qsrand((uint) QTime::currentTime().msec());

    connect(&m_timer, &QTimer::timeout, this, &Chart::handleTimeout);
    m_timer.setInterval(1000);

    m_series = new QSplineSeries(this);

    QPen green(Qt::red);
    green.setWidth(3);
    m_series->setPen(green);
    m_series->append(m_x, m_y);

    addSeries(m_series);
    createDefaultAxes();
    setAxisX(m_axis, m_series);
    m_axis->setTickCount(5);

    yMax = 10;
    yMin = -5;

    axisX()->setRange(0, 10);
    axisY()->setRange(yMin, yMax);

    connect(m_series, &QSplineSeries::pointAdded, [=](int index){
        qreal y = m_series->at(index).y();

        if(y< yMin || y > yMax){
            if(y < yMin)
                yMin = y;
            if(y> yMax)
                yMax = y;
            axisY()->setRange(yMin-20, yMax+20);
        }

    });

    m_timer.start();
}

Chart::~Chart()
{

}

void Chart::handleTimeout()
{
    qreal x = plotArea().width() / m_axis->tickCount();
    qreal y = (m_axis->max() - m_axis->min()) / m_axis->tickCount();
    m_x += y;
    //m_y = qrand() % 5 - 2.5;
    m_y = 50*(qrand() % 5 - 2.5);
    m_series->append(m_x, m_y);
    scroll(x, 0);
    if (m_x == 100)
        m_timer.stop();
}
