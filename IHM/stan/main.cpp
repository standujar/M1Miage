#include <QApplication>
#include "mafenetre.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MaFenetre fenetre(250,150);

    //Affichage de la fenetre et donc de son contenu
    fenetre.show();

    return app.exec();

}
