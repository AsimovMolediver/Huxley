#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    scan(1, 0);
    
	return 0;
}

void scan(int prof, int total)
{
    int n;
    char t;
    
    scanf("%d\n%c", &n, &t);
    
    if(prof <= 7)
    {
    if(t == 'p' || t == 'P')
    {
        total = total + (10 * n);
    }
    else if(t == 'g'|| t == 'G')
    {
        total = total + (16 * n);
    }
    scan(prof + 1, total);
    }
    
    else
    {
        printf("%d\n", total);
        printf("%d\n", (total * 2)/7);
    }
}