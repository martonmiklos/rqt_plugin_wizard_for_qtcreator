#include <rqt_%{Plugin}/rqt_%{Plugin}_widget.h>
#include "ui_rqt_%{Plugin}_widget.h"

%{CN}Widget::%{CN}Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::%{CN}Widget)
{
    ui->setupUi(this);
}

%{CN}Widget::~%{CN}Widget()
{
    delete ui;
}
