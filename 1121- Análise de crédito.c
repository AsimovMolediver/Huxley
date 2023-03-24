#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double salario, gasto, calculo, pa;
    double disponivel;
    
    scanf("%lf%lf", &salario, &gasto);
    
    pa = (salario * 30) / 100;
    
    if (gasto >= pa)
    {
        printf("0.00");
    }
    else if (gasto > 0 && gasto < pa)
    {
        calculo = pa - gasto;
        printf("%.2lf", calculo);
    }
    else if (gasto = 0)
    {
        printf("%.2lf", pa);
    }
    
    
	return 0;
}