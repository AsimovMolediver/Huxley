#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b;
    
    scanf("%d %d", &a, &b);
    
    if (a > b)
    {
    printf("%d %d", b, a);    
    }
    else if (b > a)
    {
    printf("%d %d", a, b);
    }
    else if (b == a)
    {
    printf("%d %d", a, b);
    }
    else
    {
    printf("0 0");
    }
    
	return 0;
}