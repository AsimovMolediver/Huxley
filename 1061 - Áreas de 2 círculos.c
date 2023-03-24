#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float a, b;
    float ca, cb;
    
    scanf("%f %f %f %f", &a, &b, ca, cb);
    
    ca = 3.14 * a * a;
    cb = 3.14 * b * b;
    
    if (ca > cb)
    {
        printf("Primeiro circulo");
    }
    else if (cb > ca)
    {
        printf("Segundo circulo");
    }
    else
    {
        printf("Iguais");
    }
	
	return 0;
}