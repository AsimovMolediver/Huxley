#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float a, r;
    
    scanf("%f%f", &a, &r);
    
    if(a > 500)
    {
        r = ((a * 10)/100) + a;
        printf("%.2f", r);
    }
    else if(a > 300 && a < 500)
    {
        r = ((a * 7)/100) + a;
        printf("%.2f", r);
    }
    else if(a < 300)
    {
        r = ((a * 5)/100) + a;
        printf("%.2f", r);
    }
    
	return 0;
}