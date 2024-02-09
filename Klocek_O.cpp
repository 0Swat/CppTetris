#include <iostream>
#include "klocek_O.h"

void Klocek_O::Ustaw()
{
    kl_pl[2][1] = true;
    kl_pl[1][1] = true;
    kl_pl[2][2] = true;
    kl_pl[1][2] = true;

    szer_1 = 0;
    szer_2 = -1;
    wys = 3;
}
