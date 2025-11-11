#pragma once
#include "Voiture.h"
class Classic :public Voiture
{
	protected:
	int const capaciteCyl;
	string carburantType;
	int niveauEssence;
	public:
		Classic(string, int, int, string, int);
		void afficher()const override;
		void fairePlein();
		void consommer(int) override;


};

