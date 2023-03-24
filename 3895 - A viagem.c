#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double salario, valor, p_km , km;
    scanf("%lf %lf %lf %lf", &salario, &valor, &p_km , &km);

    int fim;
    scanf("%d", &fim);

    double tarifa = valor + (p_km * km);

    if(fim == 1){
        tarifa = tarifa * 1.1;
    }

    salario = salario * 0.3;

    if(tarifa > salario){
        printf("N�o vai poder viajar.\n");
        printf("%.2lf\n", tarifa-salario);
    }
    else{
        printf("Vai poder viajar.\n");
        printf("%.2lf\n", tarifa);
        printf("%.2lf\n", salario-tarifa);
    }
    
	return 0;
}