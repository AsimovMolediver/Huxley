#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calcula();

int main() 
{
    
    int n, t, consta;
    
    scanf("%d%d", &n, &t);

    printf("%d\n", calcula(n, t, 0));
    
	return 0;
}

int calcula(int n, int t, int consta)
{
    if(t == 0)
    {
        return n;
    }
    else if ((consta % 2) == 0)
    {
        n += 3;
    }
    else
    {
        n += n % 5;
    }

    consta++;
    
    if (consta < t)
    {
        calcula(n, t, consta);
    }
    else
    {
        return n;
    }
}