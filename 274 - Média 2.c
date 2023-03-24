#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double A, B, C, resultado;
    
    scanf("%lf%lf%lf", &A, &B, &C);
    
    resultado = ((A * 2) / 10) + ((B * 3) / 10) + ((C * 5) / 10);
    
    printf("MEDIA = %.1lf", resultado);
    
    
	return 0;
}