#include "Electrique.h"

Electrique::Electrique(string n, int a, int c, int aut, int nvc) : Voiture(n, a), capaciteBatterie(c), autonomie(aut), niveauCharge(nvc)
{
}

void Electrique::afficher() const
{
	cout << "Marque: " << marque << "\nAnnee: " << annee << "\nCapacite Batterie: " << capaciteBatterie << " kWh\nAutonomie: " << autonomie << " km"<<"\nNiveau de charge : "<<niveauCharge << endl;
}

void Electrique::charger()
{
	this->niveauCharge = capaciteBatterie;
}

void Electrique::consommer(int c)
{
	this->niveauCharge -= c;
}

