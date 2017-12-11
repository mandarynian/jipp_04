// program oblicza pojemnosc skokowa dla fiata 126p posiadajacego 2 tloki  :) 

#include "silnik.h"
#include "tlok.h"

#include<iostream>
#include<windows.h>

int 
main(void)
{
	int nTloki;
	Silnik *pSilnik1;
	std::cout << "Wprowadz liczbe tlokow: ";
	std::cin >> nTloki;

	pSilnik1 = new Silnik(nTloki);

	std::cout << pSilnik1->ObjSkokowa(); 
	std::cout << " ccm" << std::endl;

	return 0;
}