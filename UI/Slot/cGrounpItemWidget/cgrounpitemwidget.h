#ifndef CGROUNPITEMWIDGET_H
#define CGROUNPITEMWIDGET_H

#include <QWidget>

namespace Ui {
class cGrounpItemWidget;
}

class cGrounpItemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit cGrounpItemWidget(QWidget *parent = 0);
    ~cGrounpItemWidget();

private:
    Ui::cGrounpItemWidget *ui;
};

#endif // CGROUNPITEMWIDGET_H
