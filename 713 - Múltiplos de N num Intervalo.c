#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int multiplos();

int main() {
    
    int n, a, b, contador;
    
    scanf("%d %d %d", &n, &a, &b);
    
    multiplos(n, a, b, 0);
    
	return 0;
}
int multiplos (int n, int a, int b, int contador)
{
    int calcula = a % n;
    
    if(a > b)
    {
        if(contador == 0)
        {
            printf("INEXISTENTE");
        }
        
        return 0;
    }
    else if(calcula == 0)
    {
        printf("%d\n", a);
        contador ++;
    }
    
    multiplos(n, a + 1, b, contador);
    
}