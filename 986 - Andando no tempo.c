#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int A, B, C;
    
    scanf("%d%d%d", &A, &B, &C);
    
     if (A + B == C || A + C == B || B + C == A)
    {
        printf("S");
    }
    else if (A == B || B == C || C == A)
    {
        printf("S");
    }
    else if (A > B + C || B > A + C || C > B + A)
    {
        printf("N");
    }
    else
    {
        printf("N");
    }
	return 0;
}