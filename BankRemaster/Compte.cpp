#include "Compte.h"

using namespace Bank;
int Compte::count = 0;
MAD* Compte::plafond = new MAD(2500);

Bank::Compte::Compte(CLient* C, MAD* sol):numCompte(count++)
{
	this->ref = new GC(1);
	this->solde = sol;
	this->titulaire = C;
}

Bank::Compte::Compte(const Compte& C):numCompte(C.numCompte)
{
	//this->solde = (C.solde);
	this->ref = C.ref;
	C.ref->incr();
	this->titulaire = C.titulaire;
}

Compte& Bank::Compte::operator=(Compte& C)//on peut pass faire :numCompte(count++) car compte est deja créé au niveau du constructor on est entrain de le creer
{
	if (this != &C)
	{
		if (this->titulaire && this->ref && this->ref->decr() == 0)///!!!!!!!!!!!!!!!!!!!!!!!!!WHAT
		{
			delete this->ref;
			this->ref = 0;//si delete didnt work
		}
		this->ref = C.ref;
		this->solde = C.solde;
		this->titulaire = C.titulaire;
		this->ref->incr();
	}
	return *this;
}

void Bank::Compte::crediter(MAD* M)
{
	*(this->solde) = *(this->solde) + *M;
}

bool Bank::Compte::debiter(MAD* M)
{
	if (*M <= *plafond && *(this->solde) >= *M)
	{
		*(this->solde) = *(this->solde) - *M;
		return true;
	}
	return false;
}

void Bank::Compte::verser(MAD* M, Compte& C)
{
	if (this->debiter(M)) C.crediter(M);
}

void Bank::Compte::consulter() const
{
	cout << "num compte=" << this->numCompte << endl;
	this->solde->afficher();
	cout << "titulaire " << endl;
	this->titulaire->Afficher();
}

Bank::Compte::~Compte()
{
	if (this->ref->decr() == 0 && 
		this->titulaire != nullptr)
	{
		delete this->titulaire;
		this->titulaire = nullptr;
	}
}
