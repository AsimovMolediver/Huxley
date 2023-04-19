#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void scan(double calcula, int contador)
{
    int carros;
    
    scanf("%d", &carros);
    
    if(carros == 999)
    {
        printf("%.2lf\n%d\n", calcula, contador);
        return;
    }
    else 
    {
        if(carros > 2)
        {
            calcula = calcula + (carros - 2) * 12.89;
            contador = contador + 1;
        }
        
        scan (calcula, contador);
        
    }
}

int main() 
{
    
    scan(0, 0);
    
	return 0;
}