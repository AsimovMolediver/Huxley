#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double v, fh;
    
    scanf("%lf", &v);
    
    fh = (v - 32) / 1.8;
    
    printf("%.2lf", fh);
    
    
	return 0;
}