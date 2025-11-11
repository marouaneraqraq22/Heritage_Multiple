#include "Classic.h"
Classic::Classic(string m, int a, int c, string ct, int ne) : Voiture(m, a), capaciteCyl(c), carburantType(ct), niveauEssence(ne)
{
}	
void Classic::afficher() const
{
	cout << "Voiture Classic" << endl;
	cout << "Marque: " << marque << "\nAnnee: " << annee << "\nCapacite Cylindree: " << capaciteCyl << "\nType Carburant: " << carburantType << "\nNiveau Essence: " << niveauEssence << " litres" << endl;
}
void Classic::fairePlein()
{
	this->niveauEssence = capaciteCyl; 
}

void Classic::consommer(int c)
{
	this->niveauEssence -= c;
}
