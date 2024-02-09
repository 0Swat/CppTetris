#include <iostream>
#include "klocek_L2.h"

void Klocek_L2::Ustaw()
{
    kl_pl[0][1] = true;
    kl_pl[1][1] = true;
    kl_pl[2][1] = true;
    kl_pl[2][0] = true;

    szer_1 = 1;
    szer_2 = 0;
    wys = 3;
}
