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
    string cmdStart("gnome-terminal -x bash -c \". ~/catkin_ws/devel/setup.bash; roscore\"");
//    string viconIP(ui->lineEdit_vicon->text().toStdString());
    string cmdEnd("\"; echo Finished roscore; bash\"");
    string Cmd = cmdStart + cmdEnd;
    cout << Cmd << endl;
    system(Cmd.c_str());
}


void Widget::on_pushButton_vicon_bridge_clicked()
{
    cout << "clicked." << endl;
    string cmdStart("gnome-terminal -x bash -c \". ~/catkin_ws/devel/setup.bash; . ~/bash/vicon_bridge.bash");
//    string viconIP(ui->lineEdit_vicon->text().toStdString());
    string cmdEnd("; echo Finished . ~/vicon_bridge.bash; bash\"");
    string Cmd = cmdStart + cmdEnd;
    cout << Cmd << endl;
    system(Cmd.c_str());
}


void Widget::on_pushButton_vicon2mavros_clicked()
{
    cout << "clicked." << endl;
    string cmdStart("gnome-terminal -x bash -c \". ~/catkin_ws/devel/setup.bash; . ~/bash/vicon2mavros.bash");
//    string viconIP(ui->lineEdit_vicon->text().toStdString());
    string cmdEnd("; echo Finished . ~/vicon2mavros.bash; bash\"");
    string Cmd = cmdStart + cmdEnd;
    cout << Cmd << endl;
    system(Cmd.c_str());
}


void Widget::on_pushButton_mavros_clicked()
{
    cout << "clicked." << endl;
    string cmdStart("gnome-terminal -x bash -c \". ~/catkin_ws/devel/setup.bash; . ~/bash/mavros.bash");
//    string viconIP(ui->lineEdit_vicon->text().toStdString());
    string cmdEnd("; echo Finished . ~/mavros.bash; bash\"");
    string Cmd = cmdStart + cmdEnd;
    cout << Cmd << endl;
    system(Cmd.c_str());
}


void Widget::on_pushButton_girder_detection_clicked()
{
    cout << "clicked." << endl;
    string cmdStart("gnome-terminal -x bash -c \". ~/catkin_ws/devel/setup.bash; . ~/bash/girder-detection.bash");
//    string viconIP(ui->lineEdit_vicon->text().toStdString());
    string cmdEnd("; echo Finished . ~/girder-detection.bash; bash\"");
    string Cmd = cmdStart + cmdEnd;
    cout << Cmd << endl;
    system(Cmd.c_str());
}


void Widget::on_pushButton_distance2serial_clicked()
{
    cout << "clicked." << endl;
    string cmdStart("gnome-terminal -x bash -c \". ~/catkin_ws/devel/setup.bash; . ~/bash/distance2serial.bash");
//    string viconIP(ui->lineEdit_vicon->text().toStdString());
    string cmdEnd("; echo Finished . ~/distance2serial.bash; bash\"");
    string Cmd = cmdStart + cmdEnd;
    cout << Cmd << endl;
    system(Cmd.c_str());
}
/////////////////////////////////////keyboard module////////////////////////////////////////////////////////////

void Widget::on_keyboard_clicked()
{
    cout << "clicked." << endl;
    string cmdStart("gnome-terminal -x bash -c \". ~/catkin_ws/devel/setup.bash; . ~/bash/teleop_twist_keyboard.bash");
//    string viconIP(ui->lineEdit_vicon->text().toStdString());
    string cmdEnd("; echo Finished . ~/teleop_twist_keyboard.bash; bash\"");
    string Cmd = cmdStart + cmdEnd;
    cout << Cmd << endl;
    system(Cmd.c_str());
}


void Widget::on_setpoint_clicked()
{

    string cmdStart("gnome-terminal -x bash -c \". ~/catkin_ws/devel/setup.bash; . ~/bash/birds_setpoint.bash");
//    string viconIP(ui->lineEdit_vicon->text().toStdString());
    string cmdEnd("; echo Finished . ~/birds_setpoint.bash; bash\"");
    string Cmd = cmdStart + cmdEnd;
    cout << Cmd << endl;
    system(Cmd.c_str());
}


void Widget::on_pid_clicked()
{
    cout << "clicked." << endl;
    string cmdStart("gnome-terminal -x bash -c \". ~/catkin_ws/devel/setup.bash; . ~/bash/pid_drill.bash");
//    string viconIP(ui->lineEdit_vicon->text().toStdString());
    string cmdEnd("; echo Finished . ~/pid_drill.bash; bash\"");
    string Cmd = cmdStart + cmdEnd;
    cout << Cmd << endl;
    system(Cmd.c_str());
}



