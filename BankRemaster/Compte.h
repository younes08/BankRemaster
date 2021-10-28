#pragma once
#include "CLient.h"
#include "MAD.h"
#include "GC.h"

namespace Bank
{ 
	class Compte
	{
		private:
			const int numCompte;
			static int count;
			CLient* titulaire;
			MAD* solde;
			static MAD* plafond;
			GC* ref;
		public:
			Compte(CLient*, MAD*);
			Compte(const Compte& C);
			Compte& operator=(Compte&);
			void crediter(MAD*);
			bool debiter(MAD*);
			void verser(MAD*, Compte&);
			void consulter() const;
			~Compte();

			
	};
}

