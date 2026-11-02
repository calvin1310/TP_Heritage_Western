#include "Humain.h"
#include <string>
#include <iostream>
using namespace std;

Humain::Humain(const string nom, const string boissonFavorite/*="eau"*/)
	: nom(nom), boissonFavorite(boissonFavorite){
}

void Humain::parle(const string texte) const{
	cout << "(" << nom << ") -- " << texte << endl;
}

void Humain::setBoissonFavorite(const string nouvelleBoissonFavorite){
	if (!nouvelleBoissonFavorite.empty())
		boissonFavorite = nouvelleBoissonFavorite;
}

void Humain::sePresente() const{
	cout << "(" << nom << ") -- Bonjour, je suis " << nom << " et j'aime le " << boissonFavorite << endl;
}

void Humain::boit() const{
	cout << "(" << getNom() << ") -- Ah ! un bon verre de " << boissonFavorite << " ! GLOUPS !" << endl;
}
