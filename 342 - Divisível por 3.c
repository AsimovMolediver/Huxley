#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    
    scanf("%d", &n);
    
    int resultado = divisivel(n, 3, 0);
    
    if(resultado == 0)
    {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }
    else
    {
    printf("%d\n", resultado);
    }
	return 0;
}

int divisivel(int n, int divisor, int contador)
{
    int calcula = n % divisor;
    
    //printf("n = %d", n);
    
    if(divisor > n)
    {
        //printf("divisor = %d");
        return contador;
    }
    else if(calcula == 0)
    {
        //printf("divisor = %d");
        return divisivel(n, divisor + 3, contador + 1);
    }
    else if(calcula != 0)
    {
        //printf("divisor = %d");
        return divisivel(n, divisor +3, contador);
    }
}

