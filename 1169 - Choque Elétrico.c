#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    
    int a, lvl20, lvl40, lvl60, lvl80, lvl100;
    
    scanf("%d", &a);

    lvl20 = 20 + (a * a * a);
    lvl40 = 8000 + ((a - 10) * (a - 10));
    lvl60 = 9000 + (5 * a);
    lvl80 = 9300 + (2 * a);
    lvl100 = 9500 + a;

    
    if(a >= 1 && a <= 20)
    {
        printf("Potencia de : %d W", lvl20);
    }
    else if(a >= 21 && a <= 40)
    {
        printf("Potencia de : %d W", lvl40);
    }
    else if(a >= 41 && a <= 60)
    {
        printf("Potencia de : %d W", lvl60);
    }
    else if(a >= 61 && a <= 80)
    {
        printf("Potencia de : %d W", lvl80);
    }
    else if(a >= 81 && a <= 100)
    {
        printf("Potencia de : %d W", lvl100);
    }
    
	return 0;
}