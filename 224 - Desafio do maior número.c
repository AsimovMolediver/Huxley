#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void scan(int numaior)
{
    int numero;
    
    scanf("%d", &numero);
    
    if(numero == 0)
    {
        printf("%d", numaior);
        return;
    }
    else
    {
        if(numero > numaior)
        {
            numaior = numero;
        }
        
        scan(numaior);
    }
}


int main() 
{
    
    scan(0);
    
	return 0;
}