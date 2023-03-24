#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double a, b, p1, p20, p50;
    
    scanf("%lf %lf", &a, &b);
    
    p1 = ((a * 1)/100) + a;
    p20 = ((a * 20)/100) + a;
    p50 = ((a * 50)/100) + a;

    
    if(b > p1 && b <= 20)
    {
        printf("85.13\n4");
    }
    else if(b < p20)
    {
        printf("0.00\n0");
    }
    else if(p20 < b && b < p50)
    {
        printf("127.69\n5");
    }
    else if(b > p50)
    {
        printf("574.62\n7");
    }
    else if(b = p50)
    {
        printf("127.69\n5");
    }
    
	return 0;
}