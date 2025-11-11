#include <iostream>
#include "Voiture.h"
#include "Electrique.h"
#include "Classic.h"
#include "Hybride.h"
int main()
{
	// Tester la classe Hybride
	Hybride toyota("Toyota", 2024, 400, 500, 400, "Essence", 50, 30, 0);
	toyota.afficher();
	toyota.consommer(100);
	toyota.afficher();
	toyota.switchMode();
	toyota.consommer(10);
	toyota.afficher();
	// Tester la classe Classic
	Classic ford("Ford", 2020, 3000, "Diesel", 40);
	ford.afficher();
	ford.consommer(5);
	ford.afficher();
	// Tester la classe Electrique
	Electrique tesla("Tesla", 2022, 100, 600, 80);
	tesla.afficher();
	tesla.consommer(50);
	tesla.afficher();
	tesla.charger();
	tesla.afficher();
}
