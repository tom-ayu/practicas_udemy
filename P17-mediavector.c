#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float vector[5];
    int i;

    for(i=0;i<5;i++){
        printf("Ingrese un numero real\n");
        scanf("%f",&vector[i]);
    }

    float *puntero=&vector[0];
    float media=0;
    for(i=0;i<5;i++){
        media=media+*(puntero+i);
    }

    media=media/5;
    printf("la media de los valores del vector es: %.2f\n",media);
}