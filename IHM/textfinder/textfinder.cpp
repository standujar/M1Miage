#include "textfinder.h"
#include "ui_textfinder.h"

textfinder::textfinder(QWidget *parent) : QWidget(parent), ui(new Ui::textfinder)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/plus.png"));
    setWindowTitle("TextFinder++");
    ui->tabWidget->setTabEnabled(1, false);
    ui->Suivant->hide();
    QObject::connect(ui->lineEdit, SIGNAL(textChanged(QString)), this, SLOT(maj()));
    QObject::connect(ui->lineEdit, SIGNAL(textChanged(QString)), this, SLOT(rechercher()));
    QObject::connect(ui->lineEdit, SIGNAL(textChanged(QString)), this, SLOT(all()));
}

textfinder::~textfinder()
{
    delete ui;
}

int temp = 0;


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
}

void textfinder::charger()
{
    if (ui->lineEdit_2->text().isEmpty()) {

        ui->tabWidget->setTabEnabled(1, false);

        ui->textEdit->setText("");
        ui->textEdit_3->setText("");
        ui->lcdNumber->display(0);

        QMessageBox::information(this, tr("Vous n'avez rien entré"), "Veuillez selectionner un chemin d'accès à votre fichier, ou le saisir.");
    }
    else
    {
        QFile inputFile;
        inputFile.setFileName(ui->lineEdit_2->text());
        inputFile.open(QIODevice::ReadWrite);

        QTextStream in(&inputFile);
        QString line = in.readAll();

        inputFile.close();

        ui->textEdit->setPlainText(line);
        ui->textEdit_3->setPlainText(line);

        if (!line.isEmpty())
        {
          ui->tabWidget->setTabEnabled(1, true);
        }
    }
}

void textfinder::all()
{
    QString searchString = ui->lineEdit->text();
    QTextDocument *document = ui->textEdit->document();

    bool isFirstTime = false;
    bool sensitive = true;

    if (isFirstTime == false) document->undo();

    if(ui->lineEdit->text().isEmpty()) ui->Suivant->hide();

    ui->Suivant->show();

    QTextCursor compteur(document);
    QTextCursor cursor(document);
    int occurence=0;
    cursor.beginEditBlock();

    QTextCharFormat plainFormat(compteur.charFormat());
    QTextCharFormat colorAll = plainFormat;
    colorAll.setForeground(Qt::red);
    colorAll.setBackground(Qt::yellow);

    if(!ui->radioButton->isChecked()) sensitive = false;

    while (!compteur.isNull() && !compteur.atEnd())
    {
        if (sensitive == true) compteur = document->find(searchString, compteur, QTextDocument::FindWholeWords);
        else compteur = document->find(searchString, compteur, QTextDocument::FindCaseSensitively);

        if (!compteur.isNull())
        {
            if (sensitive == true) compteur.movePosition(QTextCursor::EndOfWord, QTextCursor::KeepAnchor);
            compteur.mergeCharFormat(colorAll);
            occurence++;
        }
    }

    ui->lcdNumber->display(occurence);
    cursor.endEditBlock();
    isFirstTime = false;
}

void textfinder::rechercher()
{
    QString searchString = ui->lineEdit->text();
    QTextDocument *document = ui->textEdit->document();

    bool isFirstTime = false;
    bool found = false;
    bool sensitive = true;


    if (isFirstTime == false) document->undo();

        ui->Suivant->setEnabled(true);

        QTextCursor highlightCursor(document);
        QTextCursor cursor(document);
        highlightCursor.setPosition(temp);
        cursor.beginEditBlock();

        QTextCharFormat plainFormat(highlightCursor.charFormat());
        QTextCharFormat colorAll = plainFormat;
        colorAll.setForeground(Qt::red);
        colorAll.setBackground(Qt::yellow);

        if(!ui->radioButton->isChecked()) sensitive = false;

        if (!highlightCursor.isNull() && !highlightCursor.atEnd()) {

            if (sensitive == true) highlightCursor = document->find(searchString, highlightCursor, QTextDocument::FindWholeWords);
            else highlightCursor = document->find(searchString, highlightCursor, QTextDocument::FindCaseSensitively);

            if (!highlightCursor.isNull()) {
                found = true;
                if (sensitive == true) highlightCursor.movePosition(QTextCursor::EndOfWord, QTextCursor::KeepAnchor);
                highlightCursor.mergeCharFormat(colorAll);
                temp = highlightCursor.position();
            }
        }

        cursor.endEditBlock();
        isFirstTime = false;

        if (found == false) {
            temp=0;
            ui->Suivant->setEnabled(false);
        }
}

void textfinder::remplacer()
{

    QString searchString = ui->lineEdit_7->text();
    QString replace = ui->lineEdit_9->text();
    QTextDocument *document = ui->textEdit_3->document();

    bool isFirstTime = false;
    bool found = false;

    if (isFirstTime == false)
              document->undo();

    if (searchString.isEmpty()) {
        QMessageBox::information(this, tr("Vous n'avez rien entré"), "Le champ de Keyword est vide. Veuillez entrer un mot dans le champ.");
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

                    highlightCursor.insertText(replace+"");
                    highlightCursor.movePosition(QTextCursor::WordLeft, QTextCursor::KeepAnchor);
                    highlightCursor.mergeCharFormat(colorFormat);

                    occurence++;
                }
            }

        ui->lcdNumber_2->display(occurence);
        cursor.endEditBlock();
        isFirstTime = false;

        if (found == false) {
            QMessageBox::information(this, tr("Mot non trouvé"),
            "Aucun mot ne correspond à votre mot à remplacer.");
        }
    }
}

void textfinder::maj()
{
    ui->Suivant->hide();
    ui->lineEdit->setEnabled(true);
    ui->textEdit->document()->undo();
    temp=0;
}


void textfinder::on_Parcourir_clicked()
{
    textfinder::parcourir();
}

void textfinder::on_Charger_clicked()
{
    textfinder::charger();
}

void textfinder::on_Suivant_clicked()
{
    textfinder::rechercher();
}

void textfinder::on_Remplacer_clicked()
{
    textfinder::remplacer();
}

void textfinder::on_Quitter_clicked()
{
    QApplication::quit();
}


void textfinder::on_radioButton_clicked()
{
    textfinder::all();
}

void textfinder::on_radioButton_2_clicked()
{
    textfinder::all();
}


void textfinder::on_lcdNumber_overflow()
{

}

void textfinder::on_lcdNumber_2_overflow()
{

}



