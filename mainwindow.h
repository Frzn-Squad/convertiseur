#define CELCIUS_FARENHEIT 0
#define FARENHEIT_CELCIUS 1
               class MaFenetre : public QDialog
{
    Q_OBJECT
    // Membre(s) public(s)
public:
    MaFenetre( QWidget *parent = 0 );
    // Membre(s) privé(s)
private:
    // Les widgets
    QLineEdit *valeur;
    QLabel *resultat;
    QLabel *unite;
    QComboBox *choixConversion;
    QPushButton *bConvertir;
    QPushButton *bQuitter;
    QDoubleValidator *doubleValidator;
} ;
