#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void scan(int leituras, int capacidade, int contador, char son, int calcula)
{
    
    int sai, entra;

    scanf("%d%d", &sai, &entra);
    
    //printf("entrada %d saida %d", entra, sai);
    
    //printf("%c", son);
    
    calcula = calcula + (entra - sai);
    
    //printf("%d", calcula);
    
    if(contador >= leituras || son == 'S')
    {
        printf("%c", son);
        return;
    }
    
    else
    {
        
        if(calcula < capacidade)
        {
            son = 'N';
        }
        else if(calcula > capacidade)
        {
            son = 'S';
        }
        
    scan(leituras, capacidade, contador + 1, son, calcula);
        
    }
    
}

int main() 
{
    int leituras, capacidade;
    
    scanf("%d%d", &leituras, &capacidade);
    
    scan(leituras, capacidade, 0, 'N', 0);
    
	return 0;
}