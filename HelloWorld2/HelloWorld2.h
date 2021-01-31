#pragma once

#include <QtWidgets/QWidget>
#include "ui_HelloWorld2.h"

class HelloWorld2 : public QWidget
{
    Q_OBJECT

public:
    HelloWorld2(QWidget *parent = Q_NULLPTR);

private:
    Ui::HelloWorld2Class ui;
};
