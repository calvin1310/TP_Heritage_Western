#ifndef BARMAN_H
#define BARMAN_H
#include "Humain.h"
#include <string>
using namespace std;

class Barman : public Humain
{
public:
	Barman(const string nom = "", const string boissonFavorite = "bière", const string nomBar = "");
	string getNomBar() const { return nomBar; }
	void sePresente() const;
	void sert(const Humain& client);
private:
	string nomBar;
	string terminePhrase() const { return " mon gars."; }
};
#endif