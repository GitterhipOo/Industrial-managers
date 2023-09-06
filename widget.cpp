#include "widget.h"
#include "ui_widget.h"
#include <QCheckBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    init();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::init(){
    //启动时候初始化
    int n=5;//这里的n是用户资产的所有部分
    //循环，根据资产数量插入子项
    for(int i=0;i<n;i++)
    {
    QListWidgetItem * item = new QListWidgetItem;
    //初始化空的子项,比如设置颜色,高度，内容等等
    //设置大小
    item->setSizeHint(QSize(ui->localtions->width(),50));
    //设置内容
    item->setText(QString("4-HWWF资产"));
    //设置属性
    item->setFlags(Qt::ItemIsEditable|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);//双击可被编辑，可选中
    //item->setCheckState(Qt::Unchecked);//前方出现勾勾框

    //最后将初始化好的子项插入到listWidget控件中
    ui->localtions->addItem(item);
    }

}

void Widget::on_menu1_clicked()
{
    ui->sw_main->setCurrentIndex(1);
}

void Widget::on_menu2_clicked()
{
    ui->sw_main->setCurrentIndex(2);
}

void Widget::on_menu3_clicked()
{
    ui->sw_main->setCurrentIndex(0);
}
