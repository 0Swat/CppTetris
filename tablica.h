#ifndef TABLICA_H
#define TABLICA_H

class Tablica
{
private:
    Tablica(const Tablica& t); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Tablica& operator=(const Tablica& t); // zabezpieczenie operatora przypisania =
public:
    Tablica();
    ~Tablica();

    bool **plansza;
    int nW, nK;

    friend class Silnik;

    void Zeruj();
    bool SprawdzKlocek(Tablica *, int , int);
    bool SprawdzKlocekPoziom(Tablica *, int , int, int);
};

#endif // TABLICA_H
