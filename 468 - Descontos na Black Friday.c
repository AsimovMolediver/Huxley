#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void scan(int contador, int quantidade)
{
    double precoant, precodur;
    
    if(contador == 5)
    {
        printf("%d", quantidade);
        return;
    }
    else
    {
        
        scanf("%lf%lf", &precoant, &precodur);
        
        if(precoant - (precoant * 0.2) >= precodur)
        {
            quantidade = quantidade + 1;
        }
        
        scan(contador + 1, quantidade);
        
    }
}

int main() 
{
    
    scan(0, 0);
    
	return 0;
}