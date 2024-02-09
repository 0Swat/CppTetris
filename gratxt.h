#ifndef GRATXT_H
#define GRATXT_H

#include "gra.h"

class GraTXT : public Gra
{
private:
    GraTXT(const GraTXT& gtxt); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    GraTXT& operator=(const GraTXT& gtxt); // zabezpieczenie operatora przypisania =

protected:
    virtual void WyswietlTablica(Tablica *);
    virtual void WyswietlPrzyszlyKlocek(int);
    virtual void WyswietlWynik();

    virtual void WyswietlMenu();
    virtual void WyswietlNapisTetris();
    virtual void WyswietlTrudnosc();
    virtual void WyswietlRekord();
    virtual void WyswietlSterowanie();
    virtual void WyswietlKoniec();

    virtual void CzyscEkran();

    virtual int GetInt();

public:
    GraTXT(){}
    ~GraTXT(){}
};

#endif // GRATXT_H
