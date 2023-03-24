#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a, b;
    
    scanf("%d%d", &a, &b);
    
    if(a == 1 && b == 1)
    {
        printf("%d", a);
    }
    else if(a == 0 && b == 0)
    {
        printf("%d", a);
    }
    else if(a== 1 && b == 0)
    {
        printf("%d", a);
    }
    else if(a == 0 && b == 1)
    {
        printf("%d", b);
    }
    
	return 0;
}