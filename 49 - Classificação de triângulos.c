#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int A, B, C;
    
    scanf("%d%d%d", &A, &B, &C);
    
    if(A == B && A == C)
    {
        printf("equilatero");
    }
    else if(A != B && A != C && B != C)
    {
        printf("escaleno");
    }
    else
    {
        printf("isosceles");
    }
    
	return 0;
}