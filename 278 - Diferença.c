#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
int p, s, t, q, AB, CD, DIF;

scanf("%d%d%d%d", &p, &s, &t, &q);

AB = p * s;
CD = t * q;

DIF = AB - CD;

printf("DIFERENCA = %d", DIF);

    return 0;
}

    
    
    

