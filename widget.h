#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_roscore_clicked();

    void on_pushButton_vicon_bridge_clicked();

    void on_pushButton_vicon2mavros_clicked();

    void on_pushButton_mavros_clicked();

    void on_pushButton_girder_detection_clicked();

    void on_pushButton_distance2serial_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
