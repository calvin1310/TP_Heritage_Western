#include <iostream>
#include "cowboy.h"

Cowboy::Cowboy(const string nom, const string boissonFavorite, const string adjectif) : Humain(nom, boissonFavorite), popularite(0), adjectif(adjectif){
}

void Cowboy::sePresente() const {
    parle("Bonjour, je suis le " + adjectif + " " + getNom() + " et j'aime le " + boissonFavorite);
}