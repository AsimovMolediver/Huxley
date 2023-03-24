#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    
    scanf("%d", &n);
    
    muralha(n, 0, 0, 0, ' ');
    
	return 0;
}

void muralha(int n, int c, int d, int contador, char temp)
{
    if(n == 0)
    {
        printf("%d", contador);
        return 0;
    }
    else
    {
        char dir1;
        
        scanf(" %c", &dir1);
        //printf("%c\n", dir1);
        
        if(d != 0 && c != 0)
        {
            if(d == c)
            {
                if (temp == 'C' && dir1 == 'C')
                {
                    contador ++;
                }
                if (temp == 'D' && dir1 == 'D')
                {
                    contador ++;
                }
            }
        }
        
        if(dir1 == 'C')
        {
            c++;
        }
        if(dir1 == 'D')
        {
            d++;
        }
        temp = dir1;
        
        return muralha(n - 1, c, d, contador, temp);
    }
}