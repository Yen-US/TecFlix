//
// Created by yenus on 23/9/19.
//


#include "ventana2.h"

Ventana2::Ventana2(QWidget *parent) {
    this->resize(389, 447);
    this->setWindowTitle("TecFlix");
    QLabel* lbl = new QLabel(this);
    lbl->setGeometry(130, 10, 800, 30);
    lbl->setFont(QFont("Arial", 12));
    lbl->setText("Hello World");

}

Ventana2::~Ventana2() {
}
