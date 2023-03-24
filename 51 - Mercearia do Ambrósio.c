#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float mult(int produto, int qtd)
    {
        if (produto == 1)
        {
            return qtd * 5.30;
        }
        else if(produto == 2)
        {
            return qtd * 6.00;
        }
        else if(produto == 3)
        {
            return qtd * 3.20;
        }
        else if(produto == 4)
        {
            return qtd * 2.50;
        }
    }
    
    int produto, qtd;
    double p1, p2, p3, p4, valor;
    
    scanf("%d%d", &produto, &qtd);
    
    p1 = 5.30;
    p2 = 6.00;
    p3 = 3.20;
    p4 = 2.50;
    
    float descqtd = mult(produto, qtd);
    
    if(qtd >= 15 || descqtd >= 40)
    {
        valor = (descqtd - (descqtd * 0.15));
        printf("R$ %.2lf", valor);
    }
    else
    {
        valor = descqtd;
        printf("R$ %.2lf", valor);
    }
    
	return 0;
}