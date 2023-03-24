#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int dividendo, divisor, resultado;
    
    scanf("%d%d", &dividendo, &divisor);
    
    resultado = mdc(dividendo, divisor);
    
    printf("%d\n", resultado);
    
	return 0;
}

int mdc(int dividendo, int divisor)
{
    int resto = dividendo % divisor;
    
    if(resto == 0)
    {
        return divisor;
    }
    else
    {
        return mdc(divisor, resto);
    }
}