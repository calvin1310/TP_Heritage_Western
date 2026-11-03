#ifndef DAME_H
#define DAME_H
#include "Humain.h"
#include <string>
#include <iostream>
using namespace std;

class Dame :public Humain
{
public:
	Dame(const string nom = "", const string boissonFavorite = "lait", const string couleurRobe = "blanche");
	string getNom()const{ return "Miss " + nom;}
	string getEtat()const{ return etat;}
	void sePresente()const;
	void changeDeRobe(const string couleurRobe);
	void seFaitKidnapper();
private:
	string couleurRobe;
	string etat;
};
#endif
