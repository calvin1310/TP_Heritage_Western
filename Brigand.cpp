#include <iostream>
using namespace std;
#include "Brigand.h"
#include "Dame.h" 
#include "Cowboy.h"
Brigand::Brigand(const string nom/*=""*/, const string boissonFavorite/*="tord-boyaux"*/,
	const string comportement/*="méchant"*/) : Humain(nom, boissonFavorite), comportement(
		comportement), nbDamesEnlevees(0), recompense(0), enPrison(false)
{
}

string Brigand::getComportement() const
{
	return comportement;
}
int Brigand::getNbDamesEnlevees() const
{
	return nbDamesEnlevees;
}
int Brigand::getRecompense() const{
return recompense;
}

void Brigand::sePresente() const
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " le " <<
		getComportement() << " et j’aime le " << getBoissonFavorite() << "." << endl;
}
void Brigand::kidnappe(Dame& dame)
{
	if (!estEnPrison())
	{
		dame.seFaitKidnapper();
		nbDamesEnlevees++;
		augmenteRecompense();
		cout << "(" << nom << ") -- " << "Ah ah ! " << dame.getNom() << ", tu es mienne désormais !" << endl;
	}
}

void Brigand::seFaitEmprisonne(Cowboy& cowboy)
{
	if (!estEnPrison())
	{
		enPrison = true;
		cout << "(" << nom << ") -- " << "Damned, je suis fait ! " << cowboy.getNom() << ", tu m'as eu !" << endl;
	}
}

void Brigand::augmenteRecompense(const int prix/*=100*/)
{
	if (prix > 0)
		this->recompense += prix;
}
void Brigand::diminueRecompense(const int prix/*=100*/)
{
	if (prix > 0 && prix <= recompense)
		this->recompense -= prix;
}
bool Brigand::estEnPrison() const
{
	return enPrison;
}

void Brigand::nbDames() {
	cout << "(" << nom << ") -- " << "J'ai l'air méchant et j'ai deja kidnappe " << getNbDamesEnlevees() << " dames" << endl;
}

void Brigand::prix() {
	cout << "(" << nom << ") -- " << "Ma tete est mise a prix " << getRecompense() <<"$" << endl;
}