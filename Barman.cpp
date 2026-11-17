#include "Barman.h"
#include "Humain.h"
#include <string>
#include <iostream>
using namespace std;

Barman::Barman(const string nom, const string boissonFavorite, const string nomBar)
	: Humain(nom, boissonFavorite),
	nomBar(nomBar.empty() ? "Saloon " + nom : nomBar)
{
}

void Barman::sePresente() const
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " le barman du " <<
		getNomBar() << " et j’aime le " << getBoissonFavorite() << terminePhrase() << endl;
}

void Barman::sert(const Humain& client)
{
	cout << "(" << nom << ") -- " << "Tiens " << client.getNom() << ", le un verre de " <<
		client.getBoissonFavorite() << terminePhrase() << endl;
}
