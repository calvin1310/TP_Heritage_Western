#ifndef HUMAIN_H
#define HUMAIN_H
#include <string>
#include <iostream>
using namespace std;

class Humain
{
public:
		Humain(const string nom="", const string boissonFavorite = "eau");
		void parle(const string texte)const;
		string getBoissonFavorite() const {return boissonFavorite;}
		void setBoissonFavorite(const string nouvelleBoissonFavorite);
		virtual string getNom()const {return nom;}
		virtual void sePresente()const;
		void boit()const;
protected:
	string nom;
	string boissonFavorite;
};
#endif