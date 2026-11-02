#include "Dame.h"
#include <string>
#include <iostream>
using namespace std;

Dame::Dame(const string nom, const string boissonFavorite, const string couleurRobe) : Humain(nom, boissonFavorite), couleurRobe(couleurRobe), etat("libre") {
}

void Dame::sePresente() const {
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " et j'ai une jolie robe " << couleurRobe << endl;
}

void Dame::changeDeRobe(const string couleurRobe) {
	this->couleurRobe = couleurRobe;
	cout << "(" << nom << ") -- " << "Regardez ma nouvelle robe " << couleurRobe << " !" << endl;
}