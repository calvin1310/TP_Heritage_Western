#include <iostream>
#include "Cowboy.h"
#include "Dame.h"
#include "Brigand.h"

Cowboy::Cowboy(const string nom, const string boissonFavorite, const string adjectif) : Humain(nom, boissonFavorite), popularite(0), adjectif(adjectif){
}

void Cowboy::sePresente() const {
    parle("Bonjour, je suis le " + adjectif + " " + getNom() + " et j'aime le " + boissonFavorite);
}

void Cowboy::libere(Dame& dame) {
    cout << "** Le " << getAdjectif() << nom << " libere " << dame.getNom() << endl;
    cout << "(" << dame.getNom() << ") -- " << "Merci " << nom <<", Je suis enfin libre !" << endl;
}

void Cowboy::tire(Brigand& brigand) {
    cout << "** Le " << getAdjectif() << nom << " tire sur " << brigand.getNom() << endl;
    cout << "(" << nom << ") -- " << "Prends ça, rascal !" << endl;

}
