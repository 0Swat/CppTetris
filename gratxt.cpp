#include <iostream>
#include <conio.h>
#include <windows.h>
#include <math.h>

#include "gratxt.h"

using namespace std;


void GraTXT::WyswietlTablica(Tablica * T_state_in)
{
    cout << "              ";
    for(int i=0; i<15; i++) cout << "# ";
    cout << endl;
    for(int i=0; i<T->nW; i++)
    {
        cout << "              # ";
        for(int j=0; j<T->nK; j++)
        {
            if(T->plansza[i][j]==true || T_state_in->plansza[i][j]==true) cout << "X ";
            else cout << ". ";
        }
        cout << "#";
        cout << endl;
    }
    cout << "              ";
    for(int i=0; i<15; i++) cout << "# ";
    cout << endl;
}

void GraTXT::WyswietlPrzyszlyKlocek(int x_in)
{
    std::cout << "              #                           #                  " << std::endl;
    std::cout << "              #                           #                  " << std::endl;
    switch(x_in)
    {
    case 1:
        std::cout << "              #        # # #              #                  " << std::endl;
        std::cout << "              #        # # #              #                  " << std::endl;
        std::cout << "              #        # # #              #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #               # # #       #                  " << std::endl;
        std::cout << "              #               # # #       #                  " << std::endl;
        std::cout << "              #               # # #       #                  " << std::endl;
        break;
    case 2:
        std::cout << "              #           # # #           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        break;
    case 4:
        std::cout << "              #               # # #       #                  " << std::endl;
        std::cout << "              #               # # #       #                  " << std::endl;
        std::cout << "              #               # # #       #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #               # # #       #                  " << std::endl;
        std::cout << "              #               # # #       #                  " << std::endl;
        std::cout << "              #               # # #       #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        break;
    case 3:
        std::cout << "              #        # # #              #                  " << std::endl;
        std::cout << "              #        # # #              #                  " << std::endl;
        std::cout << "              #        # # #              #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #        # # #              #                  " << std::endl;
        std::cout << "              #        # # #              #                  " << std::endl;
        std::cout << "              #        # # #              #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        break;
    case 5:
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #        # # #  # # #       #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        break;
    case 6:
        std::cout << "              #    # # #  # # #  # # #    #                  " << std::endl;
        std::cout << "              #    # # #  # # #  # # #    #                  " << std::endl;
        std::cout << "              #    # # #  # # #  # # #    #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        std::cout << "              #                           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        std::cout << "              #           # # #           #                  " << std::endl;
        break;
    }

    std::cout << "              #                           #                  " << std::endl;
    std::cout << "              #                           #                  " << std::endl;
    std::cout << "              # # # # # # # # # # # # # # #                  " << std::endl;
}

void GraTXT::WyswietlWynik()
{
    std::cout << "              #                           #                  " << std::endl;
    std::cout << "              #         WYNIK: " << wynik;
    if(wynik==0) for(int i=0; i<10; i++) std::cout << " ";
    else for(int i=0; i<( 10 -  log10(wynik) ); i++) std::cout << " ";
    std::cout << "#" << std::endl;
    std::cout << "              #                           #                  " << std::endl;
    std::cout << "              # # # # # # # # # # # # # # #                 " << std::endl;
}





void GraTXT::WyswietlMenu()
{
    input = 0;
    CzyscEkran();
    WyswietlNapisTetris();
    cout <<
    "# # # # # # # # # # # # # # # # # # # # # # # # # # # # #" << std::endl <<
    "#                                                       #" << endl <<
    "#                    1. GRAJ                            #" << endl <<
    "#                    2. POZIOM TRUDNOSCI                #" << endl <<
    "#                    3. REKORD                          #" << endl <<
    "#                    4. STEROWANIE                      #" << endl <<
    "#                    5. WYJSCIE                         #" << endl <<
    "#                                                       #" << endl <<
    "# # # # # # # # # # # # # # # # # # # # # # # # # # # # #" << endl;
    WybierzMenu();
}

void GraTXT::WyswietlNapisTetris()
{
    cout <<
    "# # # # # # # # # # # # # # # # # # # # # # # # # # # # #" << endl <<
    "#   _______  ______  _______  _____    _____   _____    #" << endl <<
    "#  |__   __||  ____||__   __||  __ \\  |_   _| / ____|   #" << endl <<
    "#     | |   | |__      | |   | |__) |   | |  | (___     #" << endl <<
    "#     | |   |  __|     | |   |  _  /    | |   \\___ \\    #" << endl <<
    "#     | |   | |____    | |   | | \\ \\   _| |_  ____) |   #" << endl <<
    "#     |_|   |______|   |_|   |_|  \\_\\ |_____||_____/    #" << endl <<
    "#                                                       #" << endl <<
    "# # # # # # # # # # # # # # # # # # # # # # # # # # # # #" << endl;
}

void GraTXT::WyswietlTrudnosc()
{
    CzyscEkran();
    WyswietlNapisTetris();
    cout <<
    "# # # # # # # # # # # # # # # # # # # # # # # # # # # # #" << endl <<
    "#                                                       #" << endl <<
    "#                 Wybrane: ";

    switch(predkosc)
    {
    case 500:
        cout << "LATWY                        #";
        break;
    case 200:
        cout << "SREDNI                       #";
        break;
    case 50:
        cout << "TRUDNY                       #";
        break;
    }

    cout << endl;
    cout <<
    "#                                                       #" << endl <<
    "#                 1. LATWY (WOLNO)                      #" << endl <<
    "#                 2. SREDNI (UMIARKOWANIE)              #" << endl <<
    "#                 3. TRUDNY (SZYBKO)                    #" << endl <<
    "#                 4. COFNIJ                             #" << endl <<
    "#                                                       #" << endl <<
    "# # # # # # # # # # # # # # # # # # # # # # # # # # # # #" << endl;

    ZapiszTrudnosc();
    WyswietlMenu();
}

void GraTXT::WyswietlRekord()
{
    CzyscEkran();
    WyswietlNapisTetris();

    std::cout <<
    "# # # # # # # # # # # # # # # # # # # # # # # # # # # # #" << std::endl <<
    "#                                                       #" << std::endl;
    std::cout <<
    "#                 Aktualny rekord: " << rekord;
    if(rekord==0) for(int i=0; i<20; i++) std::cout << " ";
    else for(int i=0; i<( 20 -  log10(rekord) ); i++) std::cout << " ";
    std::cout << "# \n";
    std::cout <<
    "#                                                       #" << std::endl <<
    "# # # # # # # # # # # # # # # # # # # # # # # # # # # # #" << std::endl;

    input = GetInt();
    WyswietlMenu();
}

void GraTXT::WyswietlSterowanie()
{
    CzyscEkran();
    WyswietlNapisTetris();
    std::cout <<
    "# # # # # # # # # # # # # # # # # # # # # # # # # # # # #" << std::endl <<
    "#                                                       #" << std::endl <<
    "#                     Sterowanie:                       #" << std::endl <<
    "#                                                       #" << std::endl <<
    "#           1. Strzalka w lewo - ruch w lewo            #" << std::endl <<
    "#           2. Strzalka w prawo - ruch w prawo          #" << std::endl <<
    "#           3. Strzalka w dol - przyspieszenie          #" << std::endl <<
    "#           4. Spacja - obrot                           #" << std::endl <<
    "#                                                       #" << std::endl <<
    "# # # # # # # # # # # # # # # # # # # # # # # # # # # # #" << std::endl;

    input = GetInt();
    WyswietlMenu();
}

void GraTXT::WyswietlKoniec()
{
    CzyscEkran();
    std::cout <<
    "    _____              __  __   ______        ____   __      __  ______   _____   " << std::endl <<
    "   / ____|     /\\     |  \\/  | |  ____|      / __ \\  \\ \\    / / |  ____| |  __ \\  " << std::endl <<
    "  | |  __     /  \\    | \\  / | | |__        | |  | |  \\ \\  / /  | |__    | |__) | " << std::endl <<
    "  | | |_ |   / /\\ \\   | |\\/| | |  __|       | |  | |   \\ \\/ /   |  __|   |  _  /  " << std::endl <<
    "  | |__| |  / ____ \\  | |  | | | |____      | |__| |    \\  /    | |____  | | \\ \\  " << std::endl <<
    "   \\_____| /_/    \\_\\ |_|  |_| |______|      \\____/      \\/     |______| |_|  \\_\\ " << std::endl;

    std::cout << std::endl << "\\\\\\\\\\\\\\ UZYSKALES WYNIK: " << wynik << " !!!  \\\\\\\\\\\\\\" << std::endl;
    if(wynik>rekord)
    {
            rekord = wynik;
            ZapiszRekord();
            std::cout << std::endl << "\\\\\\\\\\\\\\ DODATKOWO POBILES REKORD, GRATULACJE !!!  \\\\\\\\\\\\\\" << std::endl;
    }
    Delay(3000);
}

void GraTXT::CzyscEkran()
{
    system("CLS");
}

int GraTXT::GetInt()
{
    return getch();
}
