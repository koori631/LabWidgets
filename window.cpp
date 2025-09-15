#include "window.h"
#include <QVBoxLayout>
Window::Window()
{
    this->setWindowTitle(("Event Handling"));
    area = new Area( this );
    btn = new QPushButton(("Complete"),this );
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(area);
    layout->addWidget(btn);
    connect(btn, SIGNAL(clicked(bool)),this,SLOT(close()));
};
