#pragma once
#include "Electrique.h"
#include "Classic.h"
class Hybride : public Electrique, public Classic
{
	protected:
		int mode;
	public:
		Hybride(string, int, int, int,int, string, int, int ,int );
		void afficher()const override;
		void switchMode();
		void consommer(int) override;
};

