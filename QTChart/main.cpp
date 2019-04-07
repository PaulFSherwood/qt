#include "mainwindow.h"

// Manages the applications main settings like
// widget initialization
#include <QApplication>

// The main window to which you add toolbars,
// menubars, widgets and status bar
#include <QtWidgets/QMainWindow>

// Widget used to display charts
#include <QtCharts/QChartView>

// Used to draw bars representing data provided
// grouped into categories
#include <QtCharts/QBarSeries>

// Represents 1 set of bars in a bar chart
#include <QtCharts/QBarSet>

// Displays the color used to represent each
// QBarSet
#include <QtCharts/QLegend>

// Adds categories to the charts axes
#include <QtCharts/QBarCategoryAxis>

// Used to create stacked bar charts
#include <QtCharts/QHorizontalStackedBarSeries>

// Used to create a line chart
#include <QtCharts/QLineSeries>

// Used to change names on axis
#include <QtCharts/QCategoryAxis>

// Used to make Pie Charts
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

#include <QSplineSeries>
#include <QThread>
#include <QTimer>
#include <qglobal.h>
#include <time.h>
#include "chart.h"

QT_CHARTS_USE_NAMESPACE

int main(int argc, char *argv[])
{
    int counter = 7;
    QApplication a(argc, argv);

//    // Assign names to the set of bars used
//    QBarSet *set0 = new QBarSet("Altuve");
//    QBarSet *set1 = new QBarSet("Martinez");
//    QBarSet *set2 = new QBarSet("Segura");
//    QBarSet *set3 = new QBarSet("Simmons");
//    QBarSet *set4 = new QBarSet("Trout");

//    // Assign values for each bar
//    *set0 << 283 << 341 << 313 << 338 << 346 << 335;
//    *set1 << 250 << 315 << 282 << 307 << 303 << 330;
//    *set2 << 294 << 246 << 257 << 319 << 300 << 325;
//    *set3 << 248 << 244 << 265 << 281 << 278 << 313;
//    *set4 << 323 << 287 << 299 << 315 << 306 << 313;

//    QBarSeries *series = new QBarSeries();// 1 //
//    // 2 // QHorizontalStackedBarSeries *series = new QHorizontalStackedBarSeries();
//    series->append(set0);
//    series->append(set1);
//    series->append(set3);
//    series->append(set4);

//    QChart *chart = new QChart();
//    chart->addSeries(series);
//    chart->setTitle("Batting Av by Year");
//    // No Animation, GridAxisAnimation, SeriesAnimations
//    chart->setAnimationOptions(QChart::AllAnimations);
//    QStringList categories;
//    categories << "2013" << "2014" << "2015" << "2016" << "2017" << "2018";
//    QBarCategoryAxis *axis = new QBarCategoryAxis();
//    axis->append(categories);
//    chart->createDefaultAxes();
//    chart->setAxisX(axis, series);
//    //chart->setAxisY(axis, series);
//    chart->legend()->setVisible(true);
//    chart->legend()->setAlignment(Qt::AlignBottom);

//    QChartView *chartView = new QChartView(chart);
//    chartView->setRenderHint(QPainter::Antialiasing);
//    QPalette pal = qApp->palette();
//    pal.setColor(QPalette::Window, QRgb(0xffffff));
//    pal.setColor(QPalette::WindowText, QRgb(0x404040));
//    qApp->setPalette(pal);

    QLineSeries *series = new QLineSeries();
    series->append(0, 16);
    series->append(1, 25);
    series->append(2, 24);
    series->append(3, 19);
    series->append(4, 33);
    series->append(5, 25);
    series->append(6, 34);

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();

    QFont font;
    font.setPixelSize(18);
    chart->setTitleFont(font);
    chart->setTitleBrush(QBrush(Qt::green));
    chart->setTitle("Barry bonds HRs as Pirate");

    QPen pen(QRgb(0x000000));
    pen.setWidth(5);
    series->setPen(pen);

    chart->setAnimationOptions(QChart::AllAnimations);

    QCategoryAxis *axisX = new QCategoryAxis();
    axisX->append("1986",0);
    axisX->append("1987",1);
    axisX->append("1988",2);
    axisX->append("1989",3);
    axisX->append("1990",4);
    axisX->append("1991",5);
    axisX->append("1992",6);
    axisX->append("date", counter);
    chart->setAxisX(axisX, series);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Create the main app window
    QMainWindow window;

    // Set the main window widget
    window.setCentralWidget(chartView);
    window.resize(800, 600);
    window.show();
    return a.exec();
}
