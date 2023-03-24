#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double porcentagem, p1, p2, p3, p4, p5;
    float A, B;
    
    scanf("%f%f", &A, &B);
    
    p1 = 4.40;
    p2 = 31.65;
    p3 = 56.82;
    p4 = 80.00;
    p5 = 94.00;
    
    porcentagem = (B / A) * 100;

        if (porcentagem > 0 && porcentagem < 20)
        {
        printf("%.2lf%% %.2lf%% Pessimo", porcentagem, p1);
        }
        else if (porcentagem >= 20 && porcentagem < 40)
        {
            printf("%.2lf%% %.2lf%% Ruim", porcentagem, p2);
        }
        else if (porcentagem >= 40 && porcentagem < 60)
        {
            printf("%.2lf%% %.2lf%% Bom", porcentagem, p3);
        }
        else if (porcentagem >= 60 && porcentagem < 80)
        {
            printf("%.2lf%% %.2lf%% Muito Bom", porcentagem, p4);
        }
        else if (porcentagem >= 80 && porcentagem <= 100)
        {
            printf("%.2lf%% %.2lf%% Excelente", porcentagem, p5);
        }
    
    
	return 0;
}