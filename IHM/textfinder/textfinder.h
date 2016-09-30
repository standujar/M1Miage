#ifndef TEXTFINDER_H
#define TEXTFINDER_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QString>
#include <QTextDocument>
#include <QMessageBox>
#include <QTextCharFormat>
#include <QUiLoader>
#include <QFileDialog>
#include <QResource>
#include <QLayout>

namespace Ui {
class textfinder;
}

class textfinder : public QWidget
{
    Q_OBJECT

public:
    explicit textfinder(QWidget *parent = 0);
    ~textfinder();

private:
    Ui::textfinder *ui;
    void loadTextFile();
    void parcourir();

private slots:
    void on_Recherche_clicked();
    void on_Parcourir_clicked();
    void on_Quitter_clicked();
    void on_Ok_1_clicked();
    void on_lcdNumber_overflow();
    void on_lcdNumber_2_overflow();
};

#endif // TEXTFINDER_H
