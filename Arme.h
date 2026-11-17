#ifndef ARME_H
#define ARME_H
#include <string>
using namespace std;

const int taille_chargeur = 6;

class Arme
{
public:
	Arme(const string nom = "", int prix = 100, int capacite = taille_chargeur, int nbBalles = 0);
	string getNom() const { return nom; }
	int getPrix() const { return prix; }
	int getCapacite() const { return capacite; }
	int getNbBalles() const { return nbBalles; }
	void tire();
	void recharge(int nbBalles);
private:
	string nom;
	int capacite;
	int nbBalles;
	int prix;
};
#endif