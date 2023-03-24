#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n - 1);
    }
}
void scan()
{
    int a;
    
    scanf("%d", &a);

    if (a == -1)
    {
        return;
    }
    
    int b = fatorial(a);
    
    printf("%d\n", b);
    
    return scan();
}

int main() 
{
    scan();

	return 0;
}