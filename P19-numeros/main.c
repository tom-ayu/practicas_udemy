#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Ingrese un numero\n");
    scanf("%d",&numero);

    FILE *f;
    f=fopen("tabla.txt","w");
    int i;
    for(i=0;i<=10;i++){
        fprintf(f,"%d\n",i*numero);
    }
    
    fclose(f);
}
