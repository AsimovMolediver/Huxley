#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void organizar(double tamanhos[], int posicao, int limite)
{
    if(posicao == limite - 1)
    {
        return;
    }
    else
    {
        if(tamanhos[posicao] > tamanhos[posicao + 1])
        {
            double temp = tamanhos[posicao];
            tamanhos[posicao] = tamanhos[posicao + 1];
            tamanhos[posicao + 1] = temp;
        }

        organizar(tamanhos, posicao + 1, limite);

    }
}

void scan(double tamanhos[], int posicao)
{

    if(posicao == 3)
    {
        printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", tamanhos[0], tamanhos[2], tamanhos[3], tamanhos[1]);
        return;
    }

    else
    {
        organizar(tamanhos, 0, 4);
        scan(tamanhos, posicao + 1);
    }
}

int main ()
{
    double tamanhos[4];
    
    scanf("%lf%lf%lf%lf", &tamanhos[0], &tamanhos[1], &tamanhos[2], &tamanhos[3]);

    scan(tamanhos, 0);

    return 0;
}