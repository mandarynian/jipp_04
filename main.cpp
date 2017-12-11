#include "silnik.h"
#include "tlok.h"

#include<iostream>
#include<windows.h>

int 
main(void)
{
	Silnik *pSilnik1;
	Tlok *pTloki;

	pSilnik1 = new Silnik();
	pSilnik1->UstawLiczbeTlokow();

	pTloki = new Tlok[pSilnik1->LiczbaTlokow()];

	std::cout << pTloki->ObObj(*pSilnik1);

	return 0;
}