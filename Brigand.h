#ifndef BRIGAND_H
#define BRIGAND_H
#include <iostream>
#include <string>
#include "humain.h"
using namespace std;
class Dame; // nécessaire pour indiquer que Dame est une classe (1)
class Cowboy; // nécessaire pour indiquer que Cowboy est une classe (2)
class Brigand : public Humain
{
public:
	Brigand(const string nom = "", const string boissonFavorite = "tord-boyaux", const string comportement = "méchant");
	string getNom()const{ return nom;}
	string getComportement() const;
	int getNbDamesEnlevees() const;
	int getRecompense() const;
	void sePresente() const;
	void kidnappe(Dame& dame);
	void seFaitEmprisonne(Cowboy& cowboy);
	void augmenteRecompense(const int prix = 100);
	void diminueRecompense(const int prix = 100);
	bool estEnPrison()const;
	void prix();
	void nbDames();
private:
	string comportement;
	int nbDamesEnlevees;
	int recompense;
	bool enPrison;
};
#endif

