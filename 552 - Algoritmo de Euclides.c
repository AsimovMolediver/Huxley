#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contador = 0;
int mdc();
void scan();

int main() 
{
    int operacoes;
    
    scanf("%d", &operacoes);
    
    scan(operacoes);
	
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

void scan(int operacoes)
{
    int dividendo, divisor, resultado;
    
    if(contador < operacoes)
    {
    scanf("%d%d", &dividendo, &divisor);
    
    contador++;
    
    resultado = mdc(dividendo, divisor);
    
    printf("MDC(%d,%d) = %d\n", dividendo, divisor, resultado);
    
    scan(operacoes);
    }
}

