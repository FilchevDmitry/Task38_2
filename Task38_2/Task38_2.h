#pragma once

#include <QtWidgets/QMainWindow>
#include<QWebEngineView>
#include<QtWidgets/QLineEdit>
#include<QString>
#include "ui_Task38_2.h"

class Task38_2 : public QMainWindow
{
    Q_OBJECT
private:
    Ui::Task38_2Class ui;
public:
    Task38_2(QWidget *parent = nullptr);
    QLineEdit* lineEdit = nullptr;
    QWebEngineView* lineView = nullptr;
    
    ~Task38_2();

public slots:
    void result1() { ui.webEngineView->setHtml(ui.plainTextEdit->toPlainText());};
};
