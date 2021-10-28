#include "MAD.h"
#include <iostream>

using namespace Bank;
using namespace std;

Bank::MAD::MAD(double val)
{
	this->valeur = val;
}

Bank::MAD::MAD(MAD& S)
{
	this->valeur = S.valeur;
}


MAD& Bank::MAD::operator+(MAD& M) const
{
	MAD* res = new MAD(M.valeur + this->valeur);
	return *res;
}

MAD& Bank::MAD::operator-(MAD& M) const
{
	MAD* res = new MAD(this->valeur - M.valeur);
	return *res;
}

bool Bank::MAD::operator<=(MAD& M) const
{
	return this->valeur <= M.valeur;
}

bool Bank::MAD::operator>=(MAD& M) const
{
	return this->valeur >= M.valeur;
}
void MAD::afficher() const
{
	cout << "le solde est : " << this->valeur << "MAD" << endl;
}

