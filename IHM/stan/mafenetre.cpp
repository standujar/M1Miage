#include "mafenetre.h"

MaFenetre::MaFenetre(int w, int h) : QWidget()
{
    setFixedSize(w,h);

    //Construction du bouton Quitter
    m_boutonQuit = new QPushButton("Quitter !", this);
    m_boutonQuit->setFont(QFont("Comic Sans MS", 11));
    m_boutonQuit->setCursor(Qt::PointingHandCursor);
    m_boutonQuit->move(165, 110);

    //Construction du bouton Reset
    m_boutonReset = new QPushButton("Reset", this);
    m_boutonReset->setFont(QFont("Comic Sans MS", 11));
    m_boutonReset->setCursor(Qt::PointingHandCursor);
    m_boutonReset->move(10, 110);

    //Construction du LCD Number
    m_lcd = new QLCDNumber(this);
    m_lcd->setSegmentStyle(QLCDNumber::Flat);
    m_lcd->setPalette(Qt::red);
    m_lcd->move(10, 10);

    //Construction de la Bar de progression
    m_probar = new QProgressBar(this);
    m_probar->setGeometry(10, 40, 220, 30);
    m_probar->setValue(0);

    //Construction du Slider
    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(10, 80, 185, 20);

    //Connection Slider LCD / Probar
    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_probar, SLOT(setValue(int)));
    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(display(int)));

    //Connection Bouton Quitter
    QObject::connect(m_boutonQuit, SIGNAL(clicked()), qApp, SLOT(quit()));
    QObject::connect(m_boutonReset, SIGNAL(clicked()), m_probar, SLOT(reset()));

    //Connection Bouton Reset pour reset le slider avec un mapper
    QSignalMapper *mapper = new QSignalMapper(this);

    mapper->connect(mapper , SIGNAL(mapped(int)), m_slider , SLOT(setValue(int)));
    mapper->setMapping(m_boutonReset, 0);

    m_boutonReset->connect(m_boutonReset, SIGNAL(clicked()), mapper , SLOT(map()));
}
