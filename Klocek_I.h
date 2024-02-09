#ifndef KLOCEK_I_H
#define KLOCEK_I_H

#include "klocek.h"

class Klocek_I : public Klocek
{
private:
    Klocek_I(const Klocek_I& kl); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Klocek_I& operator=(const Klocek_I& kl); // zabezpieczenie operatora przypisania =
public:
    Klocek_I(){};
    ~Klocek_I(){};

    virtual void Ustaw();
};

#endif // KLOCEK_I_H
