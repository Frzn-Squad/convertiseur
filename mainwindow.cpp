#include "mainwindow.h"
               MaFenetre::MaFenetre( QWidget *parent ) : QDialog( parent )
{
    // 1. Instancier les widgets
    valeur = new QLineEdit(this);
    resultat = new QLabel(this);
    unite = new QLabel(this);
    choixConversion = new QComboBox(this);
    bConvertir = new QPushButton(QString::fromUtf8("Convertir"), this);
    bQuitter = new QPushButton(QString::fromUtf8("Quitter"), this);
    // 2. Personnaliser les widgets
    // 3. Instancier les layouts
    // 4. Positionner les widgets dans les layouts
    // 5. Connecter les signaux et slots
    // 6. Personnaliser la fenêtre
}
// 7. Définir les slots
// 8. Définir les méthodes
