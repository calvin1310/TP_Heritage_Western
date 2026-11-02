//#include "Humain.h"
#include "Dame.h"
#include "Cowboy.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
	/*cout << "Question 1\n";
	Humain lucky("Lucky Luke", "coca-cola");
	cout << "Une histoire sur " << lucky.getNom() << endl;
	lucky.sePresente();
	lucky.boit();
	Humain* joe = new Humain("Joe");
	cout << "Une histoire sur " << joe->getNom() << endl;
	joe->setBoissonFavorite("whisky");
	joe->sePresente();
	joe->boit();*/

	cout << "Question 2\n";
	Cowboy lucky("Lucky Luke");
	Dame jenny("Jenny");
	lucky.sePresente();
	jenny.sePresente();
	jenny.changeDeRobe("verte");
	lucky.boit();
	jenny.boit();
}