#include <iostream>
#include "klocek_I.h"

void Klocek_I::Ustaw()
{
    kl_pl[0][1] = true;
    kl_pl[1][1] = true;
    kl_pl[2][1] = true;

    szer_1 = 1;
    szer_2 = -1;
    wys = 3;
}
