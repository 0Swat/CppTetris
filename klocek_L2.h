#ifndef KLOCEK_L2_H
#define KLOCEK_L2_H

#include "klocek.h"

class Klocek_L2 : public Klocek
{
private:
    Klocek_L2(const Klocek_L2& kl); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Klocek_L2& operator=(const Klocek_L2& kl); // zabezpieczenie operatora przypisania =
public:
    Klocek_L2(){};
    ~Klocek_L2(){};

    virtual void Ustaw();
};

#endif // KLOCEK_L2_H
