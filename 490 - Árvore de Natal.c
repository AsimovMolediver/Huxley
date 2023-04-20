#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void scan(double arvore, int contador, double totalg, double totalfunc)
{
    double bola, preco;
    
    scanf("%lf%lf", &bola, &preco);
    
    if(contador == 3)
    {
        totalfunc = (totalg + arvore) /21;
        printf("%.2lf\n%.2lf\n", totalg + arvore, totalfunc);
        return;
    }
    else
    {
        totalg = totalg + (bola * preco);
        scan(arvore, contador + 1, totalg, totalfunc);
    }
}


int main() 
{
    
    double arvore;
    
    scanf("%lf", &arvore);
    
    scan(arvore, 0, 0, 0);
    
	return 0;
}