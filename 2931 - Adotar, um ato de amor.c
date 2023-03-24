#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int idade, adotando;
    char ascendente, conjunta, casados, pais_desconhecidos, consentimento, maior12;
    
    scanf("%d %c %c %c %d %c %c %c", &idade, &ascendente, &conjunta, &casados, &adotando, &pais_desconhecidos, &consentimento, &maior12);

    if(idade < 18)
    {
        printf("Nao pode adotar");
    }
    else if((idade - adotando) < 16 || adotando >= 12 && consentimento == 'N')
    {
        printf("Nao pode adotar");
    }
    else if(ascendente == 'S')
    {
        printf("Nao pode adotar");
    }
    else if(conjunta == 'S')
    {
        if(casados == 'S')
        {
            printf("Nao pode adotar");
        }
        else
        {
            printf("Pode adotar");
        }
    }
    else if(pais_desconhecidos == 'S')
    {
        printf("Pode adotar");
    }
    else if(pais_desconhecidos == 'N')
    {
        if(consentimento == 'S')
        {
            printf("Pode adotar");
        }
        else if(consentimento == 'N')
        {
            printf("Nao pode adotar");
        }
    }
    
   
    return 0;
}