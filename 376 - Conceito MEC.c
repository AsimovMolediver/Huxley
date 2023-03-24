#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int divisao(int a, int b)
{
    return b / a;
}

int main() {
    
    int a, b;
    
    scanf("%d%d", &a, &b);
    
    int d = divisao(a, b);
    
    if(d <= 8)
    {
        printf("A");
    }
    else if(d >= 9 && d <= 12)
    {
        printf("B");
    }
    else if(d >= 13 && d <= 18)
    {
        printf("C");
    }
    else if(d > 18)
    {
        printf("D");
    }
    
	return 0;
}