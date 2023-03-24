#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int maiorx(int A, int B)
{
    if(A > B)
    {
    return 1;
    }
    else
    {
    return 0;
    }
}
int igual(int A, int B)
{
    if(A == B)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int menorx(int A, int B)
{
    if(A < B)
    {
    return 1;
    }
    else
    {
    return 0;
    }
}
int diferentex(int A, int B)
{
    if(A != B)
    {
    return 1;
    }
    else
    {
    return 0;
    }
}
int maiorig(int A, int B)
{
    if(A >= B)
    {
    return 1;
    }
    else
    {
    return 0;
    }
}
int menorig(int A, int B)
{
    if(A <= B)
    {
    return 1;
    }
    else
    {
    return 0;
    }
}


int main() {
    
    int A, B;
    
    scanf("%d%d", &A, &B);
    
    int maior = maiorx(A, B);
    int iguala = igual(A, B);
    int menor = menorx(A, B);
    int diferente = diferentex(A, B);
    int maiori = maiorig(A, B);
    int menori = menorig(A, B);
    
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", maior, iguala, menor, diferente, maiori, menori);
    
	return 0;
}