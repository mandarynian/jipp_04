#include "tlok.h"

#include <math.h>

Tlok::Tlok()
{
}

Tlok::~Tlok()
{
}

double Tlok::ObObj() // obliczamy pojemnosc pojedyńczego tłoka 
{
	double dObj = 0.0;
	double dPI = 3.14;

	dObj = dPI/4 * pow(7.35, 2) * 7;

	return dObj;
}