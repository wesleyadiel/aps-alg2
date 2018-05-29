//
// Created by wesle on 21/05/2018.
//
#ifndef APS_LOGO_H
#define APS_LOGO_H

#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

void desenhar(int, int);
void chamaTela();

void desenhar(int x,int y)
{
    COORD p= {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);
}

void chamaTela()
{
<<<<<<< HEAD
    int margem;

    for (margem=41; margem <127; margem++)
=======
    int borda;
    for (borda=41; borda <127; borda++)
>>>>>>> 65d8f16384de5abf1b8554dc25ffc687f964b691
    {

        if (margem>46 && margem <53 || margem==59 || margem==60 || margem==67 || margem==68 || margem==75 || margem==76 || margem==83 || margem==84 || margem==91
            || margem==92 || margem==99 || margem==100 || margem>106 && margem<113 || margem==119 || margem==120 || margem>87 && margem<91)
        {

            printf(" ");
        }
        else
        {

            desenhar(margem, 5);
            printf("%c", 219);
        }
    }
    for (margem=41; margem <127; margem++)
    {

        if (margem>46 && margem <53 || margem==59 || margem==60 || margem==67 || margem==68 || margem==75 || margem==76 || margem==83 || margem==84 || margem==91
            || margem==92 || margem==99 || margem==100 || margem>106 && margem<113 || margem==119 || margem==120 || margem==55 || margem==56 || margem>62 && margem<67
            || margem>70 && margem<75 || margem==79 || margem==80 || margem>87 && margem<91 || margem==115 || margem==116)
        {

            printf(" ");
        }
        else
        {

            desenhar(margem, 7);
            printf("%c", 223);
        }
    }
    for (margem=41; margem <127; margem++)
    {

        if (margem==43 || margem==44 || margem>46 && margem <53 || margem==59 || margem==60 || margem==67 || margem==68 || margem==75 || margem==76 || margem==83 || margem==84 || margem==91
            || margem==92 || margem==99 || margem==100 || margem>106 && margem<113 || margem==119 || margem==120 || margem>87 && margem<91 || margem==93 || margem==94 || margem==97
            || margem==98 || margem==103 || margem==104 || margem==123 || margem==124)
        {

            printf(" ");
        }
        else
        {

            desenhar(margem, 9);
            printf("%c", 219);
        }
    }
    for (margem=41; margem <127; margem++)
    {

        if (margem>46 && margem <53 || margem==59 || margem==60 || margem==67 || margem==68 || margem==75 || margem==76 || margem==83 || margem==84 || margem==91
            || margem==92 || margem==99 || margem==100 || margem>106 && margem<113 || margem==119 || margem==120 || margem==55 || margem==56 || margem>60 && margem<65 ||
            margem>68 && margem<73 || margem==79 || margem==80 || margem==93 || margem==94 || margem==97 || margem==98 || margem==115 || margem==116)
        {

            printf(" ");
        }
        else
        {

            desenhar(margem, 11);
            printf("%c", 220);
        }
    }
    for (margem=41; margem <127; margem++)
    {

        if (margem>46 && margem<53 || margem==59 || margem==60 || margem==67 || margem==68 || margem==75 || margem==76 || margem==83 || margem==84 || margem==91
            || margem==92 || margem==99 || margem==100 || margem>106 && margem<113 || margem==119 || margem==120 || margem==55 || margem==56 || margem==79 ||
            margem==80 || margem==93 || margem==94 || margem==97 || margem==98 || margem==115 || margem==116)
        {

            printf(" ");
        }
        else
        {

            desenhar(margem, 13);
            printf("%c", 219);
        }
    }

    for (margem=31; margem<137; margem++)
    {
        if (margem==37 || margem==38 || margem==45 || margem==46 || margem==53 || margem==54 || margem==61 || margem==62 || margem==69 || margem==70 || margem>76 && margem<83
            || margem==89 || margem==90 || margem==97 || margem==98 || margem==105 || margem==106 || margem==113 || margem==114 || margem==121 || margem==122 || margem==129
            || margem==130 || margem==33 || margem==34 || margem==117 || margem==118 || margem>133 && margem<137)
        {
            printf(" ");

        }
        else
        {

            desenhar(margem, 17);
            printf("%c", 219);
        }
    }
    for (margem=31; margem<137; margem++)
    {
        if (margem==37 || margem==38 || margem==45 || margem==46 || margem==53 || margem==54 || margem==61 || margem==62 || margem==69 || margem==70 || margem>76 && margem<83
            || margem==89 || margem==90 || margem==97 || margem==98 || margem==105 || margem==106 || margem==113 || margem==114 || margem==121 || margem==122 || margem==129
            || margem==130 || margem>41 && margem<45 || margem>48 && margem<53 || margem>73 && margem<77 || margem==85 || margem==86 || margem>100 && margem<105
            || margem>109 && margem<113 || margem==65 || margem==66 || margem==93 || margem==94 || margem==118 || margem==125 || margem==126 || margem>133 && margem<137)
        {
            printf(" ");

        }
        else
        {

            desenhar(margem, 19);
            printf("%c", 223);
        }
    }
    for (margem=31; margem<137; margem++)
    {
        if (margem==37 || margem==38 || margem==45 || margem==46 || margem==53 || margem==54 || margem==61 || margem==62 || margem==69 || margem==70 || margem>76 && margem<83
            || margem==89 || margem==90 || margem==97 || margem==98 || margem==105 || margem==106 || margem==113 || margem==114 || margem==121 || margem==122 || margem==129
            || margem==130 || margem==55 || margem==56 || margem==59 || margem==60 || margem>133 && margem<137)
        {
            printf(" ");

        }
        else
        {

            desenhar(margem, 21);
            printf("%c", 219);
        }
    }
    for (margem=31; margem<137; margem++)
    {
        if (margem==37 || margem==38 || margem==45 || margem==46 || margem==53 || margem==54 || margem==61 || margem==62 || margem==69 || margem==70 || margem>76 && margem<83
            || margem==89 || margem==90 || margem==97 || margem==98 || margem==105 || margem==106 || margem==113 || margem==114 || margem==121 || margem==122 || margem==129
            || margem==130 || margem==33 || margem==34 || margem>41 && margem<45 || margem>46 && margem<51 || margem==55 || margem==56 || margem==59 || margem==60
            || margem>73 && margem<77 || margem==85 || margem==86 || margem>98 && margem<103 || margem>109 && margem<113 || margem==65 || margem==93 || margem==117
            || margem==125 || margem==126)
        {
            printf(" ");

        }
        else
        {

            desenhar(margem, 23);
            printf("%c", 220);
        }
    }
    for (margem=31; margem<137; margem++)
    {
        if (margem==37 || margem==38 || margem==45 || margem==46 || margem==53 || margem==54 || margem==61 || margem==62 || margem==69 || margem==70 || margem>76 && margem<83
            || margem==89 || margem==90 || margem==97 || margem==98 || margem==105 || margem==106 || margem==113 || margem==114 || margem==121 || margem==122 || margem==129
            || margem==130 || margem==33 || margem==34 || margem==55 || margem==56 || margem==59 || margem==60 || margem==85 || margem==86 || margem==65 || margem==66
            || margem==93 || margem==94 || margem==117 || margem==118 || margem==125 || margem==126)
        {
            printf(" ");

        }
        else
        {

            desenhar(margem, 25);
            printf("%c", 219);
        }
    }
}
#endif //APS_LOGO_H

