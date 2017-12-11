#include "tlok.h"


Tlok::Tlok()
{
}

Tlok::~Tlok()
{
}

double Tlok::ObObj(Silnik &pSil) // obliczamy pojemnosc pojedyńczego tłoka 
{
	double dObj = 0.0;
	double dPI = 3.14;

	dObj = dPI/4 *2 * pSil.LiczbaTlokow();

	return dObj;
}