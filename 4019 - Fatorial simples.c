#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fat(int n)
{
    if (n == 0)
    {
        return 1;               // Passo b�sico.
    }
    else
    {
        return n * fat(n-1);    // Passo recursivo.
    }
}


int main() 
{
    
    int n, res;
    
    scanf("%d", &n);
    
    res = fat(n);
    
    printf("%d\n",res);
    
	return 0;
}