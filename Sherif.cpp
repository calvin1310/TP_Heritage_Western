#include "Sherif.h"
#include "Brigand.h"
#include <iostream>
using namespace std;

Sherif::Sherif(const string nom, const string boissonFavorite)
	: Cowboy(nom, boissonFavorite), nbBrigandsCoffres(0)
{
}

void Sherif::sePresente() const
{
	cout << "(" << nom << ") -- Bonjour, je suis " << getNom() << " et j'aime le " << boissonFavorite << ".";
	if (nbBrigandsCoffres > 0)
		cout << " J'ai deja coffre " << nbBrigandsCoffres << " brigand.";
	else if(nbBrigandsCoffres > 1)
		cout << " J'ai deja coffre " << nbBrigandsCoffres << " brigands.";
	cout << endl;
}

void Sherif::coffre(Brigand& brigand)
{
	cout << "** Au nom de la loi, je vous arrête !" << endl;
	brigand.seFaitEmprisonne(*this);
	nbBrigandsCoffres++;
}

void Sherif::cherche(const Brigand& brigand) const
{
	cout << "** OYEZ OYEZ BRAVE GENS ! ! " << brigand.getRecompense() << "$ a qui arrêtera " << brigand.getNom() << " mort ou vif ! !" << endl;
}