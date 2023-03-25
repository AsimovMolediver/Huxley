#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial();
int primo();
double pp();
double resultado(int indice, int n);

int main() 
{
    int n;
    double resposta;

    scanf("%d", &n);
    
    resposta = resultado(1, n);

    printf("%.2lf", resposta);

	return 0;
}

int fatorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n - 1);
    }
}

int primo(int n, int tst1, int tst2)
{
    int resposta;
    
    if(n == 1)
    {
        return 0;
    }
    
    else if(n % tst1 == 0 && n % tst2 == 0)
    {
        if(tst1 == 1 && tst2 == n)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }

    return primo(n, tst1, tst2 + 1);
}

double pp(int n)
{

    if(primo(n, 1, 2))
    {
        return n;
    }
    else
    {
        pp(n + 1);
    }
}

double resultado(int indice, int n)
{
    if(n == 0)
    {
        return n;
    }
    else
    {
        if(n == 1)
        {
            printf("%d!/%d\n", indice, indice);

			return fatorial(indice) / indice;  
        }
        else
        {
            if(indice == 1)
            {
                printf("%d!/%d + ", indice, indice);
                return fatorial(indice) / indice + resultado(indice + 1, n);
            }
            else if(indice < n)
            {
                printf("%d!/%.0lf + ", indice, pp(indice));
                return (fatorial(indice) / pp(indice)) + resultado(indice + 1, n);
            }
            else if(indice == n)
            {
                printf("%d!/%.0lf\n", indice, pp(indice));
                return fatorial(indice) / pp(indice);
            }
        }

    }
}

//fim.
