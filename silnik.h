#ifndef _silnik_H_
#define _silnik_H_

class Silnik
{
public:
  Silnik(int = 0);
  ~Silnik();

  int LiczbaTlokow();
  void UstawLiczbeTlokow();

private:
  int m_nLiczbaTlokow;

};
#endif _silnik_H_