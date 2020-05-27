#include <QApplication>
#include<QLabel>
int main(int argc, char *argv[]){
    QApplication app(argc,argv);//实例化QT程序
    QLabel *label = new QLabel("hell word");//设置文本内容
    label->setWindowTitle("My App");//设置窗口标题
    label->resize(400,400);//设置窗口大小
    label->show();//显示窗口
    return app.exec();
}
