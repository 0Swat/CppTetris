#include <iostream>
#include "Klocek_4.h"

void Klocek_4::Ustaw()
{
    kl_pl[0][1] = true;
    kl_pl[1][1] = true;
    kl_pl[1][2] = true;
    kl_pl[2][2] = true;

    szer_1 = 0;
    szer_2 = -1;
    wys = 3;
}
