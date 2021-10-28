// BankRemaster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"CLient.h"
#include "Compte.h"
#include "MAD.h"
using namespace Bank;
using namespace std;

int main()
{
    CLient* c1 = new CLient("user1", "user1", "adduser1");
    MAD* s1 = new MAD(20000);
    MAD* s2 = new MAD(1500);
    //MAD* s3 = new MAD(20000);
    Compte* cpt1 = new Compte(c1, s1);
    //Compte cpt3(*cpt1);
    Compte cpt2(*cpt1);
    //Compte* cpt2 = new Compte(c1, s3);
    cpt1->consulter();
    cpt2.consulter();
    //cpt1->debiter(s2);
    //cpt1->crediter(s3);
    // cpt1->verser(s2, *cpt2);
    //cpt1->consulter();
    //cpt2.consulter();
    // cpt2->consulter();
}

