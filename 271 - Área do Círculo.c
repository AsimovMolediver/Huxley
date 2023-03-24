#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double a, t, A;
    
    scanf("%lf", &a);
    
    t = a / 100;
    
    A = 3.14159 * t * t;
    
    printf("Area = %.4lf", A);
    
	return 0;
}