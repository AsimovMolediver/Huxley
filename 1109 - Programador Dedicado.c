#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    scan(1, 0, 0, 0, 0, 0);
    
	return 0;
}

void scan(int contador, int metap, int metal, int temp1, int temp2, int dia)
{
    int programa, linhas;
    
    scanf("%d\n%d", &programa, &linhas);
    
    if(contador > 7)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", metap);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", metal);
        if(dia == 1)
        {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO");
        }
        else if(dia == 2)
        {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA");
        }
        else if(dia == 3)
        {
            printf("DIA QUE MAIS PRODUZIU: TERCA");
        }
        else if(dia == 4)
        {
            printf("DIA QUE MAIS PRODUZIU: QUARTA");
        }
        else if(dia == 5)
        {
            printf("DIA QUE MAIS PRODUZIU: QUINTA");
        }
        else if(dia == 6)
        {
            printf("DIA QUE MAIS PRODUZIU: SEXTA");
        }
        else if(dia == 7)
        {
            printf("DIA QUE MAIS PRODUZIU: SABADO");
        }
    }
    else
    {
        if(programa >= 5)
        {
            metap++;
        }
        if(linhas >= 100)
        {
            metal++;
        }
        if(programa >= temp1 && linhas >= temp2)
        {
            temp1 = programa;
            temp2 = linhas;
            
            if(contador == 1)
            {
                dia = 1;
            }
            else if(contador == 2)
            {
                dia = 2;
            }
            else if(contador == 3)
            {
                dia = 3;
            }
            else if(contador == 4)
            {
                dia = 4;
            }
            else if(contador == 5)
            {
                dia = 5;
            }
            else if(contador == 6)
            {
                dia = 6;
            }
            else if(contador == 7)
            {
                dia = 7;
            }
        }
        contador ++;
        
        scan(contador, metap, metal, temp1, temp2, dia);
        
    }
}