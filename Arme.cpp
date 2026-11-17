#include "Arme.h"
#include <iostream>
using namespace std;

Arme::Arme(const string nom, int prix, int capacite, int nbBalles) : nom(nom), capacite(capacite), nbBalles(0), prix(prix){
	this->nbBalles = (nbBalles > capacite) ? capacite : nbBalles;
}

void Arme::tire(){
	if (nbBalles > 0){
		nbBalles--;
		cout << "** PAN !" << endl;
	}
}

void Arme::recharge(int nb){
	if (nb > 0){
		nbBalles += nb;
		if (nbBalles > capacite)
			nbBalles = capacite;
	}
	cout << "*** " << nom << " est recharge de " << nb << " balles" << endl;
}

Arme::~Arme(){
	cout << "*** "<< nom << " est detruit !!" << endl;
}
