#include <QApplication>
#include <QDebug>
#include <QtWidgets/QWidget>
#include <QPushButton>
#include <QLabel>
#include <QFont>
#include <QWidget>
#include <QIcon>
#include <QApplication>

//Basado en: http://acodigo.blogspot.com/2017/08/qt-tutorial-de-introduccion.html


class Ventana : public QWidget
{
public:
    Ventana(QWidget *parent = 0);
};

Ventana::Ventana(QWidget *parent) : QWidget(parent)
{
    QPushButton* btn = new QPushButton("Salir", this);
    btn->setGeometry(340, 160, 250, 30);

    connect(btn, &QPushButton::clicked, this, &QWidget::close);

    QLabel* lbl = new QLabel(this);
    lbl->setGeometry(130, 10, 800, 30);
    lbl->setFont(QFont("Arial", 12));
    lbl->setText("Hello World");
}
