#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void scan(int primeiro, int segundo, int numdemult, int terceiro)
{
    
    if(terceiro == 50)
    {
        printf("%d", numdemult);
        return;
    }
    
    else
    {
        if(terceiro % primeiro == 0 && terceiro % segundo == 0)
        {
            numdemult = numdemult + 1;
        }
        
        scan(primeiro, segundo, numdemult, terceiro + 1);
        
    }
}


int main()
{
    int primeiro, segundo;
    
    scanf("%d%d", &primeiro, &segundo);
    
    scan(primeiro, segundo, 0, 1);
    
	return 0;
}