#ifndef KLOCEK_H
#define KLOCEK_H

class Klocek
{
private:
    Klocek(const Klocek& k); // zabezpieczenie konstrutkora (konstr. kopiujacym)
    Klocek& operator=(const Klocek& k); // zabezpieczenie operatora przypisania =
protected:
    bool **kl_pl;
    int x, y;
    int szer_1, szer_2, wys;
public:
    Klocek();
    ~Klocek();

    friend class Silnik;

    virtual void Ustaw() = 0;
    void Obrot();
};

#endif // KLOCEK_H
