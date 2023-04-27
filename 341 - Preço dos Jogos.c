#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void scan(double dificuldade[], int num, double preco, int contador2, int contador)
{
    
    if(contador == 3)
    {
        printf("Jogo[%d] = R$%.2lf\n", contador2, preco);
        return;
    }

    else
    {
        if(preco > 100)
        {
            preco = preco - (dificuldade[num] * preco);
        }
        else if(preco < 100 && preco > 45)
        {
            preco = preco - ((dificuldade[num] * preco)/2);
            
            if(preco < 45)
            {
                preco = 45;
            }
            
        }
        else if(preco <= 45)
        {
            preco = preco;
        }
       

        scan(dificuldade, num, preco, contador2, contador + 1);
    }

}

void analise(int qtd, int contador2, double dificuldade[])
{
    int num;
    double preco;

    if(contador2 == qtd)
    {
        return;
    }

    else
    {
        scanf("%d%lf", &num, &preco);

        scan(dificuldade, num, preco, contador2, 0);

        analise(qtd, contador2 + 1, dificuldade);
    }
}

int main ()
{
    int qtd;

    double dificuldade[] = {0.25, 0.20, 0.18, 0.15, 0.12, 0.10}; 

    scanf("%d", &qtd);

    analise(qtd, 0, dificuldade);

    return 0;
}