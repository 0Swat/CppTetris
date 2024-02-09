#ifndef KLOCEK_O_H
#define KLOCEK_O_H

#include "klocek.h"

class Klocek_O : public Klocek
{
private:
    Klocek_O(const Klocek_O& kl); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Klocek_O& operator=(const Klocek_O& kl); // zabezpieczenie operatora przypisania =
public:
    Klocek_O(){};
    ~Klocek_O(){};

    virtual void Ustaw();
};

#endif // KLOCEK_O_H
