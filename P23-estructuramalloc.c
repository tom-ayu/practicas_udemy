#include <stdio.h>
#include <stdlib.h>

struct producto{
    int codigo;
    char descripcion[50];
    float precio;
};

int main(){
    struct producto *prod;
    prod=malloc(sizeof(struct producto));
    printf("Ingrese el codigo\n");
    scanf("%d",&prod->codigo);
    printf("Ingrese descripcion\n");
    scanf("%s",prod->descripcion);
    printf("Ingrese precio\n");
    scanf("%f",&prod->precio);

    printf("Código del articulo: %d\n",prod->codigo);
    printf("Descripción: %s\n",prod->descripcion);
    printf("Precio: %.2f\n",prod->precio);
    
    free(prod);
    prod=NULL;
}
