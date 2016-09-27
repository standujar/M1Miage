#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QProgressBar>
#include <QSignalMapper>

class MaFenetre : public QWidget // On héride de QWidget (IMPORTANT)
{
    public:
        MaFenetre(int w, int h);

    private:
        QPushButton *m_boutonQuit;
        QPushButton *m_boutonReset;
        QLCDNumber *m_lcd;
        QSlider *m_slider;
        QProgressBar *m_probar;
};

#endif // MAFENETRE_H
