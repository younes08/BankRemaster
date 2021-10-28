#pragma once
#include <string>
#include <iostream>

using namespace std;
namespace Bank
{
	class CLient 
	{
		private:
			string nom;
			string prenom;
			string adr;

		public: 
			CLient(string, string, string);
			void Afficher() const;
	};
}


