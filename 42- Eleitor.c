#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a;
    
    scanf("%d", &a);
    
    if (a < 16)
    {
        printf("nao eleitor");
    }
    else if(16 < a && a < 18 || a > 65)
    {
        printf("eleitor facultativo");
    }
    else if(18 <= a  && a <= 65)
    {
        printf("eleitor obrigatorio");
    }
    
	return 0;
}