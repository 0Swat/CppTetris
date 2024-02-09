#ifndef GRA_H
#define GRA_H

#include "silnik.h"

using namespace std;

class Gra : public Silnik
{
private:
    Gra(const Gra& g); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Gra& operator=(const Gra& g); // zabezpieczenie operatora przypisania =

protected:
    int input;
    int predkosc;
    int rekord;

    void WyswietlGra();

    virtual void WyswietlTablica(Tablica *) = 0;
    virtual void WyswietlPrzyszlyKlocek(int) = 0;
    virtual void WyswietlWynik() = 0;

    virtual void WyswietlMenu() = 0;
    virtual void WyswietlNapisTetris() = 0;
    virtual void WyswietlTrudnosc() = 0;
    virtual void WyswietlRekord() = 0;
    virtual void WyswietlSterowanie() = 0;
    virtual void WyswietlKoniec() = 0;

    virtual void CzyscEkran() = 0;

    virtual int GetInt() = 0;

public:
    Gra();
    ~Gra(){}

    void Graj();
    void Granie();

    void ZapiszTrudnosc();
    void WybierzMenu();
    void ZapiszRekord();

    void Delay(long n);

};


#endif // GRA_H
