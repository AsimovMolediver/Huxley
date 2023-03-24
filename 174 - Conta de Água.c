#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N, tx2, tx3, tx4, re2, re3, re4;
    int c1, c2, c3, c4;
    int vf1, vf2;
    
    scanf("%d", &N);
    
    vf1 = 20;
    vf2 = 140;
    
    c1 = 7;
    c2 = 1;
    c3 = 2;
    c4 = 5;
    
    tx2 = ((N - 10) * c2);
    tx3 = vf1 + ((N - 30) * c3);
    tx4 = vf1 + vf2 + ((N - 100) * c4);
    
    if(N >= 0 && N <= 10)
    {
        printf("%d", c1);
    }
    
    else if(N >= 11 && N <= 30)
    {
        re2 = tx2 + c1;
        printf("%d", re2);
    }
    else if (N >= 31 && N <= 100)
    {
        re3 = tx3 + c1;   
        printf("%d", re3);
    }
    else if (N >= 101 && N <= 120)
    {
        re4 = tx4 + c1;
        printf("%d", re4);
    }
    
	return 0;
}