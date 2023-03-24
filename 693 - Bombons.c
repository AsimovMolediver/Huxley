#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double preco1, preco2, preco3;
    double qtd1, qtd2, qtd3;
    
        scanf("%lf %lf %lf %lf %lf %lf", &preco1, &preco2, &preco3, &qtd1, &qtd2, &qtd3);
        
        preco1 = preco1 * qtd1;
        preco2 = preco2 * qtd2;
        preco3 = preco3 * qtd3;
        double resultado = preco1 + preco2 + preco3;
        
        printf("Valor: R$%.2lf", resultado);
    
	return 0;
}