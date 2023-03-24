#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double genero (double g) //fun��o para definir o valor para g�nero.
{
    if(g == 1)
    {
        return 27.4;
    }
    else if(g == 2)
    {
        return -10.5;
    }
    else if(g == 3)
    {
        return 19.7;
    }
}

double dia (double d) //fun��o para definir o valor para o dia.
{
    if(d == 1)
    {
        return -41.3;
    }
    else if(d == 2)
    {
        return 40.4;
    }
}

double horario (double h) //fun��o para definir o valor para o hor�rio.
{
    if(h == 1)
    {
        return -22.8;
    }
    else if(h == 2)
    {
        return 11.4;
    }
    else if(h == 3)
    {
        return 38.6;
    }
}

double amigos (double a) //fun��o para definir o aumento na chance com base na quantidade de amigos.
{
    return a * 2.3;
}

int main() {

double g, d, h, a, chance, gen, di, hor, amig;

scanf("%lf %lf %lf %lf", &g, &d, &h, &a);

//chamando as fun��es pra ficar mais facil de atribuir na f�rmula e ficar mais facil de entender.
gen = genero(g); 
di = dia(d);
hor = horario(h);
amig = amigos(a);
//chamando as fun��es pra ficar mais facil de atribuir na f�rmula e ficar mais facil de entender.

chance = gen + di + hor + amig; //c�lculo geral da chance.

//Possibilidades e seus retornos.
if(chance <= 40)
{
    printf("Melhor nao tentar.");
}
else if(chance > 40 && chance <= 80)
{
    printf("Chances boas, pode convidar.");
}
else if(chance > 80)
{
    printf("Provavelmente vao aceitar.");
}
//Possibilidades e seus retornos.

return 0;
}