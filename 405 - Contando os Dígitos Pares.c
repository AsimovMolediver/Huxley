#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contador();

int main() 
{
    int n;
    
    scanf("%d", &n);
    
    printf("%d", contador(n, 0));
    
	return 0;
}

int contador(int n, int count)
{
    int calculo = n % 10;
    
    //printf("calculo = %d\n", calculo);
    
    int resposta;
    
    if(n == 0)
    {
        //printf("%d", count);
        return count;
    }
    else if(calculo % 2 == 0)
    {
        //printf("count = %d", count);
        count++;
    }
    
    resposta = contador(n/10, count);
    
    return resposta;

}