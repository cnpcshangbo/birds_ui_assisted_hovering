#include "widget.h"
#include "./ui_widget.h"
#include <iostream>
#include <string>
using namespace std;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    cout << "clicked." << endl;
}


void Widget::on_pushButton_roscore_clicked()
{
    cout << "clicked." << endl;
//    cout << ui->lineEdit_vicon->text().toStdString() << endl;
    string viconStart("gnome-terminal -x bash -c \". ~/catkin_ws/devel/setup.bash; roslaunch vicon_bridge vicon.launch datastream_hostport:=\\\"");
//    string viconIP(ui->lineEdit_vicon->text().toStdString());
    string viconEnd("\\\"; echo Finished roslaunch mavros apm2.launch; bash\"");
    string viconCmd = viconStart + viconEnd;
    cout << viconCmd << endl;
    system(viconCmd.c_str());
}


void Widget::on_pushButton_vicon_bridge_clicked()
{
    cout << "clicked." << endl;
}


void Widget::on_pushButton_vicon2mavros_clicked()
{
        cout << "clicked." << endl;
}


void Widget::on_pushButton_mavros_clicked()
{
        cout << "clicked." << endl;
}


void Widget::on_pushButton_girder_detection_clicked()
{
        cout << "clicked." << endl;
}


void Widget::on_pushButton_distance2serial_clicked()
{
        cout << "clicked." << endl;
}

