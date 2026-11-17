#include <iostream>
#include "Cowboy.h"
#include "Dame.h"
#include "Brigand.h"
#include "Arme.h"

Cowboy::Cowboy(const string nom, const string boissonFavorite, const string adjectif) : Humain(nom, boissonFavorite), popularite(0), adjectif(adjectif), arme(NULL){
}

void Cowboy::sePresente() const {
    parle("Bonjour, je suis le " + adjectif + " " + getNom() + " et j'aime le " + boissonFavorite);
}

void Cowboy::libere(Dame& dame) {
    cout << "** Le " << getAdjectif() << nom << " libere " << dame.getNom() << endl;
    cout << "(" << dame.getNom() << ") -- " << "Merci " << nom <<", Je suis enfin libre !" << endl;
}

void Cowboy::tire(Brigand& brigand) {
    if (arme == NULL) {
        cout << "(" << nom << ") -- Je n'ai pas d'arme !" << endl;
    }
    else if (arme->getNbBalles() == 0) {
        cout << "** Clic ! Le " << adjectif << " " << nom << " n'a plus de balles" << endl;
    }
    else {
        cout << "** Le " << adjectif << " " << nom << " tire sur " << brigand.getNom() << endl;
        arme->tire();
        cout << "(" << nom << ") -- Prends ça, rascal !" << endl;
    }
}

Cowboy::~Cowboy(){
    cout << "*** " << getNom() << "est mort !!" << endl;
    if (arme != NULL) delete arme;
}

void Cowboy::setArme(Arme* arme){
    this->arme = arme;
}
