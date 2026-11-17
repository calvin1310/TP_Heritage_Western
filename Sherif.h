#ifndef SHERIF_H
#define SHERIF_H
#include "Cowboy.h"
#include <string>
using namespace std;

class Brigand;

class Sherif : public Cowboy
{
public:
	Sherif(const string nom = "", const string boissonFavorite = "eau");
	string getNom() const { return "Sherif " + nom; }
	int getNbBrigandsCoffres() const { return nbBrigandsCoffres; }
	void sePresente() const;
	void coffre(Brigand& brigand);
	void cherche(const Brigand& brigand) const;
private:
	int nbBrigandsCoffres;
};
#endif