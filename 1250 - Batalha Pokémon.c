#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contador = 0;

void tatakae(float vc, float vb, float dc, float db)
{
    float turnosb = ceil (vc / db);
    float turnosc = ceil (vb / dc);

    //printf("%f %f \n", turnosb, turnosc);

    if(vb <= 0)
    {
        printf("Clodes\n");
        return;
    }
    if(vc <= 0)
    {
        printf("Bezaliel\n");
        return;
    }

    if(turnosb >= turnosc)
    {
        return tatakae(vc - db, vb - dc, dc, db); 
    }
    else
    {
        return tatakae(vc - db, vb, dc + 50, db); 
    }
    
}
void scan(int n)
{
    int vc, vb, dc, db;

    if(n > contador)
    {
        scanf("%d%d%d%d", &vc, &vb, &dc, &db);
        contador++;
        tatakae(vc, vb, dc, db);
        scan(n);
    }
}

int main() {
    
    int n;

    scanf("%d", &n);

    scan(n);

	return 0;
}





