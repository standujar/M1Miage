#include "textfinder.h"
#include "ui_textfinder.h"

textfinder::textfinder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::textfinder)
{
    ui->setupUi(this);
}

void textfinder::parcourir()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setNameFilter(tr("Fichiers Texte (*.txt);; Tous les fichiers (*.*)"));
    dialog.setLabelText(QFileDialog::FileName, "Mon Fichier :");
    dialog.setLabelText(QFileDialog::FileType, "Type de fichiers :");
    dialog.setLabelText(QFileDialog::Accept, "Sélectionner");
    dialog.setLabelText(QFileDialog::Reject, "Annuler");
    QStringList fileNames = dialog.selectedFiles();

    if(dialog.exec())
        {
            fileNames = dialog.selectedFiles();
            ui->lineEdit_2->setText(fileNames.at(0));
            fileNames.removeAt(0);
        }
    else
    {
        dialog.reject();
    }

    if(!ui->lineEdit_2->text().isEmpty())
    {
        textfinder::loadTextFile();
        ui->findButton->setEnabled(true);
    }
    else
    {
        ui->findButton->setEnabled(false);
    }
}

void textfinder::loadTextFile()
{
    QFile inputFile;
    inputFile.setFileName(ui->lineEdit_2->text());
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();

    inputFile.close();

    ui->textEdit->setPlainText(line);
    ui->textEdit_3->setPlainText(line);
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
        int occurence=0;
        cursor.beginEditBlock();

        QTextCharFormat plainFormat(highlightCursor.charFormat());
        QTextCharFormat colorFormat = plainFormat;
        colorFormat.setForeground(Qt::red);

        while (!highlightCursor.isNull() && !highlightCursor.atEnd()) {
            highlightCursor = document->find(searchString, highlightCursor, QTextDocument::FindWholeWords);

            if (!highlightCursor.isNull()) {
                found = true;
                highlightCursor.movePosition(QTextCursor::WordRight, QTextCursor::KeepAnchor);
                highlightCursor.mergeCharFormat(colorFormat);
                occurence++;
            }
        }
        ui->lineEdit_3->setText(QString::number(occurence));
        cursor.endEditBlock();
        isFirstTime = false;

        if (found == false) {
            QMessageBox::information(this, tr("Mot non trouvé"),
            "Aucun mot ne correspond à votre rechercher.");
        }
    }
}

void textfinder::on_pushButton_clicked()
{
    textfinder::parcourir();
}

textfinder::~textfinder()
{
    delete ui;
}
