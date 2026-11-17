#include "Humain.h"
#include "Dame.h"
#include "Cowboy.h"
#include "Brigand.h"
#include "Barman.h"
#include "Sherif.h"
#include "Arme.h"
#include <string>
#include <iostream>
using namespace std;
void presentezVous(const Humain &humain)
{
	humain.sePresente();
}

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

	/*cout << "Question 2\n";
	Cowboy lucky("Lucky Luke");
	Dame jenny("Jenny");
	lucky.sePresente();
	jenny.sePresente();
	jenny.changeDeRobe("verte");
	lucky.boit();
	jenny.boit();*/

	/*cout << "Question 3\n";
	Cowboy lucky("Lucky Luke", "coca-cola");
	Dame jenny("Jenny");
	Brigand joe("Joe");
	lucky.sePresente();
	jenny.sePresente();
	joe.sePresente();
	joe.kidnappe(jenny);
	lucky.sePresente();
	joe.sePresente();
	joe.nbDames();
	joe.prix();
	lucky.tire(joe);
	joe.seFaitEmprisonne(lucky);
	lucky.libere(jenny);*/

	/*cout << "Question 4\n";
	Cowboy lucky("Lucky Luke", "coсa-cola");
	Dame jenny("Jenny");
	Brigand joe("Joe");
	Barman robert("Robert");
	presentezVous(lucky);
	presentezVous(jenny);
	presentezVous(joe);
	presentezVous(robert);
	robert.sert(lucky);
	robert.sert(jenny);
	robert.sert(joe);*/

	/*cout << "Question 5\n";
	Cowboy lucky("Lucky Luke", "coсa-cola");
	Dame jenny("Jenny");
	Brigand joe("Joe");
	Barman robert("Robert");
	Sherif clint("Clint");
	presentezVous(lucky);
	presentezVous(jenny);
	presentezVous(joe);
	presentezVous(robert);
	presentezVous(clint);
	joe.augmenteRecompense();
	clint.cherche(joe);
	clint.coffre(joe);
	presentezVous(clint);*/

	cout << "Question 6\n";
	Cowboy lucky("Lucky Luke", "coca-cola");
	Dame jenny("Jenny");
	Brigand joe("Joe");
	Sherif clint("Clint");
	Arme* colt = new Arme("Colt", 150, 6, 2);
	lucky.setArme(colt);
	joe.setArme(new Arme("Smith & Wesson", 100, 6, 2));
	clint.setArme(new Arme("Glock", 200, 6, 6));

	presentezVous(lucky);
	presentezVous(jenny);
	presentezVous(joe);
	presentezVous(clint);

	joe.kidnappe(jenny);
	clint.cherche(joe);

	cout << endl << "--- Le duel ---" << endl;
	lucky.tire(joe);
	joe.tire(lucky);
	lucky.tire(joe);
	lucky.tire(joe);
	colt->recharge(6);
	lucky.tire(joe);

	clint.coffre(joe);
	lucky.libere(jenny);

	clint.sePresente();
}
