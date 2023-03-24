#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

/*
1 Eletronic
2 Indie
3 Rock

1 Hard
2 Amistoso
*/

void classificacao(double x,double y)
{
    if (y==1)
    {
        if (x==1)
        {
            printf("Aumenta mais!\n");
        }
        else if (x==2)
        {
            printf("Essa eh punk\n");
        }
        else if (x==3)
        {
            printf("Aumenta mais!\n");
        }
    }
    else if (y==2)
    {
        
        if (x==1)
        {
            printf("Legal\n");
        }
        else if (x==2)
        {
            printf("Hoje eu choro\n");
        }
        else if (x==3)
        {
            printf("Legal\n");
        }
    }
}

void emoji(double x)
{
    if (x<=4)
    {
        printf(":'(");
    }
    else if (x>4 && x<=7)
    {
        printf("^_^");
    }
    else
    {
        printf("=D");
    }
}

int main()
{
    double estilo_p,estilo_s,fator;
    scanf("%lf %lf %lf",&estilo_p,&estilo_s,&fator);
    classificacao(estilo_p,estilo_s);
    emoji(fator);


    return 0;
}