#ifndef SILNIK_H
#define SILNIK_H

#include "tablica.h"
#include "klocek.h"
#include "klocek_L.h"
#include "klocek_L2.h"
#include "klocek_I.h"
#include "klocek_O.h"
#include "klocek_4.h"
#include "klocek_T.h"

class Silnik
{
private:
    Silnik(const Silnik& s); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Silnik& operator=(const Silnik& s); // zabezpieczenie operatora przypisania =

    bool KlocekIstnieje;
protected:

public:
    Silnik();
    ~Silnik(){}

    int klocek_los;
    int wynik;

    Klocek *K;
    Tablica *T;
    Tablica *T_state;

    void Ruch();
    void SprawdzMapaPoziom();
    void NowyKlocek(int);
    void RysujKlocek(Tablica *, int, int, bool wynik_dodaj = false);
    bool SprawdzCzyObrotMozliwy();
    bool KoniecGry();
    int Losuj();
};

#endif // SILNIK_H
