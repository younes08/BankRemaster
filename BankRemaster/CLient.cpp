#include "CLient.h"

Bank::CLient::CLient(string n, string p, string a)
{
	this->nom = n;
	this->nom =	p;
	this->nom = a;
}

void Bank::CLient::Afficher() const
{
	cout << "nom :" << this->nom << "\n" << "prenom:" << this->prenom << "\n" << "Adresse:" << this->adr << endl;
}
