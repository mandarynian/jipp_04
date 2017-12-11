#ifndef _silnik_H_
#define _silnik_H_

#include "tlok.h"

class Tlok;

class Silnik : public Tlok
{
public:
  Silnik(int = 0);
  ~Silnik();

  int LiczbaTlokow();
  void UstawLiczbeTlokow();
  double ObjSkokowa();

private:
  int m_nLiczbaTlokow;
  Tlok *pTloki;
};
#endif _silnik_H_