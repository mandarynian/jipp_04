#include "Silnik.h"

#ifndef _tlok_H_
#define _tlok_H_

class Tlok
{
public:
  Tlok();
  ~Tlok();

  double ObObj(Silnik &);

private:
  double m_dPojemnosc;


};
#endif _tlok_H_