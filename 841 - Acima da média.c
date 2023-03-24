#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float x, y, z;
    float media;
    
    scanf("%f %f %f %f", &x, &y, &z, media);
    
    media = (x + y + z)/3;
    if (x > media && y > media && z > media)
    {
    printf("3");
    }
    else if (x < media && y < media && z < media)
    {
    printf("0");
    }
    else if (x < media && y > media && z > media)
    {
    printf("2");
    }
    else if (x > media && y < media && z > media)
    {
    printf("2");
    }
    else if (x > media && y > media && z < media)
    {
    printf("2");
    }
    else if (x < media && y < media && z > media)
    {
    printf("1");
    }
    else if (x < media && y > media && z < media)
    {
    printf("1");
    }
    else if (x > media && y < media && z < media)
    {
    printf("1");    
    }
    else
    {
    printf("0");
    }
    
	return 0;
}