#include "Hybride.h"

Hybride::Hybride(string a, int b , int c, int d,int nvc , string h, int f, int g,int s): Electrique(a, b, c, d,nvc), Classic(a, b, f, h, g), mode(s)
{
}

void Hybride::afficher() const
{
	cout << "Voiture Hybride" << endl;
	cout << "Marque: " << Electrique::marque << ", Annee: " << Electrique::annee << endl;
	cout << "Capacite Batterie: " << capaciteBatterie << " kWh, Autonomie: " << autonomie << " km  Niveau de charge"<<niveauCharge << endl;
	cout << "Capacite Cylindree: " << capaciteCyl << "L  Type Carburant: " << carburantType << ", Niveau Essence: " << niveauEssence << " litres" << endl;
	cout << "Mode: actuelle: " << mode << endl;

}

void Hybride::switchMode()
{
	if(this->mode==0) this->mode=1;
	else 
		this->mode = 0;
}

void Hybride::consommer(int c)
{
	if(this->mode==0)
	{
		this->niveauCharge -= c ;
	}
	else 
	{
		this->niveauEssence-= c;
	}
}

