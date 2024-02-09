#include <time.h>
#include <windows.h>
#include <math.h>

#include "silnik.h"

Silnik::Silnik()
{
    srand(time(NULL));
    T = new Tablica;
    T_state = new Tablica;
    wynik = 0;
    klocek_los = Losuj();
    KlocekIstnieje = false;
}

void Silnik::Ruch()
{
    SprawdzMapaPoziom();
    if(!KlocekIstnieje)
    {
        NowyKlocek(klocek_los);

        int temp = Losuj();
        while(temp==klocek_los)
        {
            temp = Losuj();
        }
        klocek_los = temp;
    }
    else
    {
        if(GetAsyncKeyState(VK_SPACE) && SprawdzCzyObrotMozliwy())
        {
            K->Obrot();
        }
        if(K->y!=25-K->wys)
        {
            T->Zeruj();
            if(T->SprawdzKlocek(T_state,K->x, K->y) == true)
            {
                 RysujKlocek(T, K->x, K->y);
            }
            if(T->SprawdzKlocek(T_state,K->x, K->y) == false)
            {
                T->Zeruj();
                RysujKlocek(T_state, K->x, K->y, true);
                KlocekIstnieje = false;
            }
            if((T->SprawdzKlocek(T_state,K->x, K->y)))
            {
                if(GetAsyncKeyState(VK_RIGHT) && K->x!=10+K->szer_1 && T->SprawdzKlocekPoziom(T_state, K->x, K->y, 1))
                {
                    K->x++;
                }
                else if(GetAsyncKeyState(VK_LEFT) && K->x!=0+K->szer_2 && T->SprawdzKlocekPoziom(T_state, K->x, K->y, -1))
                {
                    K->x--;
                }
                K->y++;
            }
        }
        else
        {
            T->Zeruj();
            RysujKlocek(T_state, K->x, K->y, true);
            KlocekIstnieje = false;
        }
    }
}

void Silnik::SprawdzMapaPoziom()
{

    for(int i=0; i<T_state->nW; i++)
    {
        int suma = 0;
        for(int j=0; j<T_state->nK; j++)
        {
            suma += int(T_state->plansza[i][j]);
        }
        if(suma==13)
        {
            for(int j=0; j<T_state->nK; j++)
            {
                T_state->plansza[i][j] = false;
            }

            for(int j=i; j>=0; j--)
            {
                for(int k=0; k<T_state->nK; k++)
                {
                    if(j!=0) T_state->plansza[j][k] = T_state->plansza[j-1][k];
                    else T_state->plansza[j][k] = false;
                }
            }
            wynik += 100;
        }
    }
}

void Silnik::NowyKlocek(int klocek_los)
{
    KlocekIstnieje = true;
    switch(klocek_los)
    {
    case 1:
        K = new Klocek_4;
        break;
    case 2:
        K = new Klocek_I;
        break;
    case 3:
        K = new Klocek_L;
        break;
    case 4:
        K = new Klocek_L2;
        break;
    case 5:
        K = new Klocek_O;
        break;
    case 6:
        K = new Klocek_T;
        break;
    }
    K->Ustaw();
    RysujKlocek(T, K->x, K->y);
}

void Silnik::RysujKlocek(Tablica * T_in, int x_in, int y_in, bool wynik_dodaj)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(K->kl_pl[i][j]==true)
            {
                T_in->plansza[y_in+i][x_in+j] = K->kl_pl[i][j];
                if(wynik_dodaj)wynik += 10;
            }

        }
    }
}

bool Silnik::SprawdzCzyObrotMozliwy()
{
    int suma=0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            suma+=int(T_state->plansza[K->y+i][K->x+j]);
        }
    }
    if(suma!=0) return false;
    if(K->x == -1) return false;
    if(K->x == 11) return false;

    return true;
}

bool Silnik::KoniecGry()
{
    for(int i=0; i<13; i++)
    {
        if(T_state->plansza[0][i] == true) return true;
    }
    return false;
}

int Silnik::Losuj()
{
    return (rand()%6) + 1;
}
