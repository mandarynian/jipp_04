#include "silnik.h"

#include <iostream>

Silnik::Silnik(int nLT) : m_nLiczbaTlokow(nLT) 
{
}

void Silnik::UstawLiczbeTlokow()
{
	std::cout << "Ile tlokow posiada silnik? ";
	std::cin >> m_nLiczbaTlokow;
}

int Silnik::LiczbaTlokow()
{
	return m_nLiczbaTlokow;
}