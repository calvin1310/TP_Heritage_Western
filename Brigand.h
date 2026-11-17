#ifndef BRIGAND_H
#define BRIGAND_H
#include <iostream>
#include <string>
#include "humain.h"
using namespace std;
class Dame; 
class Cowboy;
class Arme;
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
	~Brigand();
	void setArme(Arme* arme);
	void tire(Cowboy& cowboy);
private:
	string comportement;
	int nbDamesEnlevees;
	int recompense;
	bool enPrison;
	Arme* arme;
};
#endif

