#include "textfinder.h"
#include "ui_textfinder.h"

textfinder::textfinder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::textfinder)
{
    ui->setupUi(this);
    loadTextFile();
}



void textfinder::loadTextFile()
{

    QFile inputFile("input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();

    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();

}

void textfinder::on_findButton_clicked()
{
    QString searchString = ui->lineEdit->text();
    QTextDocument *document = ui->textEdit->document();

    bool isFirstTime = false;
    bool found = false;

    if (isFirstTime == false)
              document->undo();

    if (searchString.isEmpty()) {
        QMessageBox::information(this, tr("Vous n'avez rien entré"), "Le champ de recherche est vide. Veuillez entrer un mot dans le champ.");
    }

    else
    {
        QTextCursor highlightCursor(document);
        QTextCursor cursor(document);

        cursor.beginEditBlock();

        QTextCharFormat plainFormat(highlightCursor.charFormat());
        QTextCharFormat colorFormat = plainFormat;
        colorFormat.setForeground(Qt::blue);

        while (!highlightCursor.isNull() && !highlightCursor.atEnd()) {
            highlightCursor = document->find(searchString, highlightCursor, QTextDocument::FindWholeWords);

            if (!highlightCursor.isNull()) {
                found = true;
                highlightCursor.movePosition(QTextCursor::WordRight, QTextCursor::KeepAnchor);
                highlightCursor.mergeCharFormat(colorFormat);
            }
        }

        cursor.endEditBlock();
        isFirstTime = false;

        if (found == false) {
            QMessageBox::information(this, tr("Mot non trouvé"),
            "Aucun mot ne correspond à votre rechercher.");
        }
    }
}


textfinder::~textfinder()
{
    delete ui;
}
