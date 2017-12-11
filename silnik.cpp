#include "silnik.h"

#include <iostream>

Silnik::Silnik(int nLT) : m_nLiczbaTlokow(nLT) 
{
	pTloki = new Tlok[m_nLiczbaTlokow];
}

int Silnik::LiczbaTlokow()
{
	return m_nLiczbaTlokow;
}

double Silnik::ObjSkokowa()
{
  double sum = 0.0;

  for (int i = 0; i < m_nLiczbaTlokow; i++)
    sum += pTloki[i].ObObj();
  
  return sum;
}