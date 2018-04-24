#include "cgrounpitemwidget.h"
#include "ui_cgrounpitemwidget.h"

cGrounpItemWidget::cGrounpItemWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cGrounpItemWidget)
{
    ui->setupUi(this);
}

cGrounpItemWidget::~cGrounpItemWidget()
{
    delete ui;
}
