#pragma once
#include <iostream>
using namespace std;
class Voiture
{
protected:
    string marque;
    int annee;
public:
    Voiture(string, int);
    virtual void afficher()const = 0;
	virtual void consommer(int) = 0;
    virtual ~Voiture();
};

