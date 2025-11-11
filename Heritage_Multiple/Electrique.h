#pragma once
#include "Voiture.h"
class Electrique : public Voiture
{
protected:
    int const capaciteBatterie;
    int autonomie;
	int niveauCharge;
public:
    Electrique(string , int, int, int,int);
	void afficher()const override;
	void charger();
	void consommer(int);

};

