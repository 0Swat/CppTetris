#ifndef KLOCEK_4_H
#define KLOCEK_4_H

#include "klocek.h"

class Klocek_4 : public Klocek
{
private:
    Klocek_4(const Klocek_4& kl); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Klocek_4& operator=(const Klocek_4& kl); // zabezpieczenie operatora przypisania =
public:
    Klocek_4(){};
    ~Klocek_4(){};

    virtual void Ustaw();
};

#endif // KLOCEK_4_H
