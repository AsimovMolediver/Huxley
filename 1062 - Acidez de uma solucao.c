#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    
    
    scanf("%d", &n);
    
    
    if (n < 7)
    {
        printf ("Acida");
    }
    else if (n > 7)
    {
        printf("Basica");
    }
    else 
    {
        printf("Neutra");
    }
	return 0;
}