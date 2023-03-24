#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primo();
void scan();

int main() 
{
    
    scan();
    
	return 0;
}

int primo(int n, int tst1, int tst2)
{
    int resposta;
    
    if(n == 1)
    {
        return 0;
    }
    
    else if(n % tst1 == 0 && n % tst2 == 0)
    {
        if(tst1 == 1 && tst2 == n)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }

    return primo(n, tst1, tst2 + 1);
}

void scan()
{
    int n;
    
    scanf("%d", &n);

    if (n == -1)
    {
        return;
    }
    
    int resultado = primo(n,1,2);
    
    printf("%d\n", resultado);
    
    return scan();
}
