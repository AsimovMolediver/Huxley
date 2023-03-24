#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a, b, c;
    
    scanf("%d%d%d", &a, &b, &c);
    
    if(a < b && a < c)
    {
        printf("%d", a);
    }
    else if(b < a && b < c)
    {
        printf("%d", b);
    }
    else if(c < a && c < b)
    {
        printf("%d", c);
    }
    else if(a == b && b < c)
    {
        printf("%d", b);
    }
    else if(b == a && b < c)
    {
        printf("%d", b);
    }
    else if (b == c && b < a)
    {
        printf("%d", c);
    }
    else if (c == b && b < a)
    {
        printf("%d", a);
    }
    else if (c == a && c < b)
    {
        printf("%d", c);
    }
    else if (a == c && c < b)
    {
        printf("%d", c);
    }
    else 
    {
        printf("%d", a);
    }
    
    
	return 0;
}