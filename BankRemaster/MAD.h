#pragma once

namespace Bank
{
	class MAD
	{
		private:
			double valeur;

		public:
			MAD(double);
			MAD(MAD&);
			MAD& operator+(MAD&) const;
			MAD& operator-(MAD&) const;
			bool operator<=(MAD&) const;
			bool operator>=(MAD&) const;
			void afficher() const;

	};
}

