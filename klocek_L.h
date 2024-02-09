#ifndef KLOCEK_L_H
#define KLOCEK_L_H

#include "klocek.h"

class Klocek_L : public Klocek
{
private:
    Klocek_L(const Klocek_L& kl); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Klocek_L& operator=(const Klocek_L& kl); // zabezpieczenie operatora przypisania =
public:
    Klocek_L(){};
    ~Klocek_L(){};

    virtual void Ustaw();
};

#endif // KLOCEK_L_H
