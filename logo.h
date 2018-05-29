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
    int borda;
    for (borda=41; borda <127; borda++)
    {

        if (borda>46 && borda <53 || borda==59 || borda==60 || borda==67 || borda==68 || borda==75 || borda==76 || borda==83 || borda==84 || borda==91
            || borda==92 || borda==99 || borda==100 || borda>106 && borda<113 || borda==119 || borda==120 || borda>87 && borda<91)
        {

            printf(" ");
        }
        else
        {

            desenhar(borda, 5);
            printf("%c", 219);
        }
    }
    for (borda=41; borda <127; borda++)
    {

        if (borda>46 && borda <53 || borda==59 || borda==60 || borda==67 || borda==68 || borda==75 || borda==76 || borda==83 || borda==84 || borda==91
            || borda==92 || borda==99 || borda==100 || borda>106 && borda<113 || borda==119 || borda==120 || borda==55 || borda==56 || borda>62 && borda<67
            || borda>70 && borda<75 || borda==79 || borda==80 || borda>87 && borda<91 || borda==115 || borda==116)
        {

            printf(" ");
        }
        else
        {

            desenhar(borda, 7);
            printf("%c", 223);
        }
    }
    for (borda=41; borda <127; borda++)
    {

        if (borda==43 || borda==44 || borda>46 && borda <53 || borda==59 || borda==60 || borda==67 || borda==68 || borda==75 || borda==76 || borda==83 || borda==84 || borda==91
            || borda==92 || borda==99 || borda==100 || borda>106 && borda<113 || borda==119 || borda==120 || borda>87 && borda<91 || borda==93 || borda==94 || borda==97
            || borda==98 || borda==103 || borda==104 || borda==123 || borda==124)
        {

            printf(" ");
        }
        else
        {

            desenhar(borda, 9);
            printf("%c", 219);
        }
    }
    for (borda=41; borda <127; borda++)
    {

        if (borda>46 && borda <53 || borda==59 || borda==60 || borda==67 || borda==68 || borda==75 || borda==76 || borda==83 || borda==84 || borda==91
            || borda==92 || borda==99 || borda==100 || borda>106 && borda<113 || borda==119 || borda==120 || borda==55 || borda==56 || borda>60 && borda<65 ||
            borda>68 && borda<73 || borda==79 || borda==80 || borda==93 || borda==94 || borda==97 || borda==98 || borda==115 || borda==116)
        {

            printf(" ");
        }
        else
        {

            desenhar(borda, 11);
            printf("%c", 220);
        }
    }
    for (borda=41; borda <127; borda++)
    {

        if (borda>46 && borda<53 || borda==59 || borda==60 || borda==67 || borda==68 || borda==75 || borda==76 || borda==83 || borda==84 || borda==91
            || borda==92 || borda==99 || borda==100 || borda>106 && borda<113 || borda==119 || borda==120 || borda==55 || borda==56 || borda==79 ||
            borda==80 || borda==93 || borda==94 || borda==97 || borda==98 || borda==115 || borda==116)
        {

            printf(" ");
        }
        else
        {

            desenhar(borda, 13);
            printf("%c", 219);
        }
    }

    for (borda=31; borda<137; borda++)
    {
        if (borda==37 || borda==38 || borda==45 || borda==46 || borda==53 || borda==54 || borda==61 || borda==62 || borda==69 || borda==70 || borda>76 && borda<83
            || borda==89 || borda==90 || borda==97 || borda==98 || borda==105 || borda==106 || borda==113 || borda==114 || borda==121 || borda==122 || borda==129
            || borda==130 || borda==33 || borda==34 || borda==117 || borda==118 || borda>133 && borda<137)
        {
            printf(" ");

        }
        else
        {

            desenhar(borda, 17);
            printf("%c", 219);
        }
    }
    for (borda=31; borda<137; borda++)
    {
        if (borda==37 || borda==38 || borda==45 || borda==46 || borda==53 || borda==54 || borda==61 || borda==62 || borda==69 || borda==70 || borda>76 && borda<83
            || borda==89 || borda==90 || borda==97 || borda==98 || borda==105 || borda==106 || borda==113 || borda==114 || borda==121 || borda==122 || borda==129
            || borda==130 || borda>41 && borda<45 || borda>48 && borda<53 || borda>73 && borda<77 || borda==85 || borda==86 || borda>100 && borda<105
            || borda>109 && borda<113 || borda==65 || borda==66 || borda==93 || borda==94 || borda==118 || borda==125 || borda==126 || borda>133 && borda<137)
        {
            printf(" ");

        }
        else
        {

            desenhar(borda, 19);
            printf("%c", 223);
        }
    }
    for (borda=31; borda<137; borda++)
    {
        if (borda==37 || borda==38 || borda==45 || borda==46 || borda==53 || borda==54 || borda==61 || borda==62 || borda==69 || borda==70 || borda>76 && borda<83
            || borda==89 || borda==90 || borda==97 || borda==98 || borda==105 || borda==106 || borda==113 || borda==114 || borda==121 || borda==122 || borda==129
            || borda==130 || borda==55 || borda==56 || borda==59 || borda==60 || borda>133 && borda<137)
        {
            printf(" ");

        }
        else
        {

            desenhar(borda, 21);
            printf("%c", 219);
        }
    }
    for (borda=31; borda<137; borda++)
    {
        if (borda==37 || borda==38 || borda==45 || borda==46 || borda==53 || borda==54 || borda==61 || borda==62 || borda==69 || borda==70 || borda>76 && borda<83
            || borda==89 || borda==90 || borda==97 || borda==98 || borda==105 || borda==106 || borda==113 || borda==114 || borda==121 || borda==122 || borda==129
            || borda==130 || borda==33 || borda==34 || borda>41 && borda<45 || borda>46 && borda<51 || borda==55 || borda==56 || borda==59 || borda==60
            || borda>73 && borda<77 || borda==85 || borda==86 || borda>98 && borda<103 || borda>109 && borda<113 || borda==65 || borda==93 || borda==117
            || borda==125 || borda==126)
        {
            printf(" ");

        }
        else
        {

            desenhar(borda, 23);
            printf("%c", 220);
        }
    }
    for (borda=31; borda<137; borda++)
    {
        if (borda==37 || borda==38 || borda==45 || borda==46 || borda==53 || borda==54 || borda==61 || borda==62 || borda==69 || borda==70 || borda>76 && borda<83
            || borda==89 || borda==90 || borda==97 || borda==98 || borda==105 || borda==106 || borda==113 || borda==114 || borda==121 || borda==122 || borda==129
            || borda==130 || borda==33 || borda==34 || borda==55 || borda==56 || borda==59 || borda==60 || borda==85 || borda==86 || borda==65 || borda==66
            || borda==93 || borda==94 || borda==117 || borda==118 || borda==125 || borda==126)
        {
            printf(" ");

        }
        else
        {

            desenhar(borda, 25);
            printf("%c", 219);
        }
    }
}
#endif //APS_LOGO_H

