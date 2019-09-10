#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mass_index.h"

using namespace BMI;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_BMI->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_calc_clicked()
{
   float weight,height,index;
   weight = ui->doubleSpinBox_Weight->value();
   height = ui->doubleSpinBox_Height->value();
   height = height/100;
   index = weight/(height*height);
   ui->label_BMI->setText(QString::number(index));
   ui->label_BMI->show();
}
