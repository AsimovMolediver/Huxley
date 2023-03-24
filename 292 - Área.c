#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double a, b, c;
    double at, ac, atr, aq, ar;
    
    scanf("%lf %lf %lf", &a, &b, &c );
    at = (a * c) / 2;
    ac = 3.14159 * c * c;
    atr = ((a + b) * c) / 2;
    aq = b * b;
    ar = a * b;
    
    //printf("TRIANGULO : %.3lf CIRCULO : %.3lf TRAPEZIO :  %.3lf QUADRADO: %.3lf RETANGULO : %.3lf", at, ac, atr, aq, ar);
    
    printf("TRIANGULO: %.3lf", at);
    printf("\n");
    printf("CIRCULO: %.3lf", ac);
    printf("\n");
    printf("TRAPEZIO: %.3lf", atr);
    printf("\n");
    printf("QUADRADO: %.3lf", aq);
    printf("\n");
    printf("RETANGULO: %.3lf", ar);
    
	return 0;
}