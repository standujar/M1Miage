#ifndef TEXTFINDER_H
#define TEXTFINDER_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QTextCursor>
#include <QIODevice>
#include <QString>
#include <QTextDocument>
#include <QMessageBox>
#include <QTextCharFormat>
#include <QUiLoader>

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

private slots:
    void on_findButton_clicked();
};


#endif // TEXTFINDER_H
