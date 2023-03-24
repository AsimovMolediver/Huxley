#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double c, g, t ;
    
    scanf("%lf", &c);
    
    g = c * 10/100;
    
    t = g + c;
    
    printf("%.2lf", t);
    
	return 0;
}