#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int triangular();

int main() 
{
    int n;
    
    scanf("%d", &n);
    
    triangular(n, 1, 2, 3);
    
	return 0;
}

int triangular(int n, int n1, int n2, int n3)
{
    int multi = n1 * n2 * n3;
    
    if(multi == n)
    {
        printf("%d * %d * %d = %d\nVerdadeiro", n1, n2, n3, n);
        return 0;
    }
    else if(multi > n)
    {
        printf("Falso");
        return 0;
    }
    
    triangular(n, n1 + 1, n2 + 1, n3 + 1);
}