#include <iostream>
#include <windows.h>
#include "tablica.h"


Tablica::Tablica()
{
    nW = 25;
    nK = 13;
    plansza = new bool* [nW];
    for(int i=0; i<nW; i++)
    {
        plansza[i] = new bool [nK];
    }
    for(int i=0; i<nW; i++)
    {
        for(int j=0; j<nK; j++)
        {
            plansza[i][j] = false;
        }
    }
}

Tablica::~Tablica()
{
    if(plansza)
    {
        for(int i=0; i<nW; i++)
        {
            delete []plansza[i];
        }
        delete []plansza;
    }
}


void Tablica::Zeruj()
{
    for(int i=0; i<nW; i++)
    {
        for(int j=0; j<nK; j++)
        {
            plansza[i][j] = false;
        }
    }
}

bool Tablica::SprawdzKlocek(Tablica * T_state_in, int x_in, int y_in)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if
            (
                (plansza[y_in+i][x_in+j] == T_state_in->plansza[y_in+i+1][x_in+j]) &&
                (plansza[y_in+i][x_in+j] == true)
            )
            {
                return false;
            }
        }
    }
    return true;
}

bool Tablica::SprawdzKlocekPoziom(Tablica * T_state_in, int x_in, int y_in, int a)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if
            (
                (plansza[y_in+i][x_in+j] == T_state_in->plansza[y_in+i][x_in+j + a]) &&
                (plansza[y_in+i][x_in+j] == true)
            )
            {
                return false;
            }
        }
    }
    return true;
}
