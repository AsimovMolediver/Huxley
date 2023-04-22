#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calcula(double cot, double aliquota, double produto, double frete)
{
    double produtoreais = produto * cot;
    double fretereais = frete * cot;
    double total = produtoreais + fretereais;
    double impostoimpor = total * 0.6;
    double valorfinal = (total + impostoimpor) / (1 - (aliquota / 100));
    double icms = valorfinal * (aliquota / 100);
    double totalimp = impostoimpor + icms;

    if(produto < 2500)
    {
        printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\nImpostos calculados com o frete\n", cot, produtoreais, fretereais, total, impostoimpor, icms, totalimp, valorfinal);
    }
    else
    {
        impostoimpor = produtoreais * 0.6;
        valorfinal = (produtoreais + impostoimpor) / (1 - (aliquota / 100));
        icms = valorfinal * (aliquota/ 100);
        totalimp = impostoimpor + icms;
        printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\nImpostos calculados sem o frete\n", cot, produtoreais, fretereais, total, impostoimpor, icms, totalimp, valorfinal + fretereais);
    }

}

int main() 
{
    double cot, aliquota, produto, frete;
    
    scanf("%lf%lf%lf%lf", &cot, &aliquota, &produto, &frete);
    
    calcula(cot, aliquota, produto, frete);
    
	return 0;
}