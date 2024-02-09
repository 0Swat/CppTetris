#include <fstream>
#include <time.h>
#include <iostream>
#include <windows.h>

#include "gra.h"

using namespace std;

Gra::Gra()
{
    int x;
    ifstream plik_trudnosc_in;
    plik_trudnosc_in.open("trudnosc.txt");
    plik_trudnosc_in >> x;
    if(x!=50 && x!=200 && x!=500)
    {
        ofstream plik_trudnosc_out;
        plik_trudnosc_out.open("trudnosc.txt");
        plik_trudnosc_out << "200";
        predkosc = 200;
        plik_trudnosc_out.close();
    }
    else
    {
        predkosc = x;
    }
    plik_trudnosc_in.close();

    int x2;
    ifstream plik_rekord_in;
    plik_rekord_in.open("rekord.txt");
    plik_rekord_in >> x2;
    if(plik_rekord_in.good() && x2!=0)
    {
        ofstream plik_trudnosc_out;
        plik_trudnosc_out.open("rekord.txt");
        plik_trudnosc_out << "0";
        rekord = 0;
        plik_trudnosc_out.close();
    }
    else
    {
        rekord = x2;
    }
}

void Gra::Graj()
{
    WyswietlMenu();
}

void Gra::Delay(long n)
{
   long t0 = clock();
   while(clock()-t0<n) ;
}

void Gra::WybierzMenu()
{
    input = GetInt();

    switch(input)
    {
    case 49:
        Granie();
        break;
    case 50:
        WyswietlTrudnosc();
        break;
    case 51:
        WyswietlRekord();
        break;
    case 52:
        WyswietlSterowanie();
        break;
    case 53:
        CzyscEkran();
        return;
        break;
    default:
        WyswietlMenu();
    }
}

void Gra::ZapiszTrudnosc()
{
    input = GetInt();

    switch(input)
    {
    case 49:
        predkosc = 500;
        break;
    case 50:
        predkosc = 200;
        break;
    case 51:
        predkosc = 50;
        break;
    case 52:
        WyswietlMenu();
        break;
    default:
        WyswietlTrudnosc();
    }

    ofstream plik_trudnosc_out;
    plik_trudnosc_out.open("trudnosc.txt");
    plik_trudnosc_out << predkosc;
    plik_trudnosc_out.close();
}

void Gra::ZapiszRekord()
{
    ofstream plik_rekord_out;
    plik_rekord_out.open("rekord.txt");
    plik_rekord_out << wynik;
    plik_rekord_out.close();
}

void Gra::Granie()
{
    while(!KoniecGry())
    {
        Silnik::Ruch();
        WyswietlGra();
        if(GetAsyncKeyState(VK_DOWN)) Delay(predkosc/5);
        else Delay(predkosc);
    }
    WyswietlKoniec();
    WyswietlMenu();
}

void Gra::WyswietlGra()
{
    CzyscEkran();
    WyswietlNapisTetris();
    WyswietlTablica(T_state);
    WyswietlWynik();
    WyswietlPrzyszlyKlocek(klocek_los);
}

//WyswietlTablica(T_state);
