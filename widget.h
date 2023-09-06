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
    void init();
    ~Widget();

private slots:
    void on_menu1_clicked();

    void on_menu2_clicked();

    void on_menu3_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
