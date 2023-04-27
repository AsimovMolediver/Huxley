#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calculo(int i, int contador)
{
    
    contador++;
    
    if(i == 1)
    {
        return contador;
    }
    else
    {
        if(i % 2 == 0)
        {
            i = i / 2;
        }
        else
        {
            i = (i * 3) + 1;
        }
    }
    
    calculo(i, contador);
    
}

int scan(int i, int j, int maior, int temporaria)
{
    if(i <= j)
    {
        temporaria = calculo(i, 0);
        
        if(temporaria > maior)
        {
            maior = temporaria;
        }
        
        scan(i + 1, j, maior, temporaria);
        
    }
    else
    {
        return maior;
    }
}

void ler()
{
    int i, j, temporaria, ini, fim;
    
    if(scanf("%d%d", &i, &j) != EOF)
    {

        temporaria = 0;
        ini = i;
        fim = j;
        
        if(i > j)
        {
            temporaria = ini;
            ini = fim;
            fim = temporaria;
        }
        
        int resultado = scan(ini, fim, 0, 0);
        
        printf("%d %d %d\n", i, j, resultado);
        
        ler();
    }
    
}

int main() 
{
    
    int i, j;
    
    ler();
    
	return 0;
	
}