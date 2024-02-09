#include "klocek.h"

Klocek::Klocek()
{
    kl_pl = new bool* [3];
    for(int i=0; i<3; i++)
    {
        kl_pl[i] = new bool [3];
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            kl_pl[i][j] = false;
        }
    }

    x = 5;
    y = 0;
}

void Klocek::Obrot()
{
    bool temp[3][3] = { {false,false,false},
                        {false,false,false},
                        {false,false,false}};

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            temp[j][2 - i] = kl_pl[i][j];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            kl_pl[i][j] = temp[i][j];
        }
    }

    if(kl_pl[2][0] == false && kl_pl[2][1] == false && kl_pl[2][2] == false)
    {
        bool temp2[3][3] = {{false,false,false},
                            {false,false,false},
                            {false,false,false}};

        for(int i=1; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                temp2[i][j] = kl_pl[i-1][j];
            }
        }
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                kl_pl[i][j] = temp2[i][j];
            }
        }
    }

    bool left = false;
    bool right = false;
    int maxwidth = 0;
    for(int i=0; i<3; i++)
    {
        if(kl_pl[i][0] == true) left = true;
        if(kl_pl[i][2] == true) right = true;
    }
    if(left == true && right == true)
    {
        szer_1 = 0;
        szer_2 = 0;
    }
    if(left == true && right == false)
    {
        szer_1 = 0;
        szer_2 = 1;
    }
    if(left == false && right == true)
    {
        szer_1 = -1;
        szer_2 = 0;
    }
    if(left == false && right == false)
    {
        szer_1 = -1;
        szer_2 = 1;
    }

}

Klocek::~Klocek()
{
    if(kl_pl)
    {
        for(int i=0; i<3; i++)
        {
            delete []kl_pl[i];
        }
        delete []kl_pl;
    }
}
