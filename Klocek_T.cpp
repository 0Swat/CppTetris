#include <iostream>
#include "klocek_T.h"

void Klocek_T::Ustaw()
{
    kl_pl[0][0] = true;
    kl_pl[0][1] = true;
    kl_pl[0][2] = true;
    kl_pl[1][1] = true;
    kl_pl[2][1] = true;

    szer_1 = 0;
    szer_2 = 0;
    wys = 3;
}
