#ifndef KLOCEK_T_H
#define KLOCEK_T_H

#include "klocek.h"

class Klocek_T : public Klocek
{
private:
    Klocek_T(const Klocek_T& kl); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Klocek_T& operator=(const Klocek_T& kl); // zabezpieczenie operatora przypisania =
public:
    Klocek_T(){};
    ~Klocek_T(){};

    virtual void Ustaw();
};

#endif // KLOCEK_T_H
