#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double numero1, numero2, media;
    
    scanf("%lf %lf", &numero1, &numero2);
    
    numero1 = numero1 * 3.5;
    numero2 = numero2 * 7.5;
    media = (numero1 + numero2) / 11;
    
    printf("MEDIA = %.5lf", media);
    
	return 0;
}