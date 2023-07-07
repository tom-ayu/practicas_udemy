#include <stdio.h>
#include <stdlib.h>

int main()
{
  int info[3][4]={{1,120,150,220},{2,130,160,230},{3,100,120,200}};
  int suma_t_baja=0,suma_t_media=0,suma_t_alta=0,i,j;

  for(i=0;i<3;i++){
    for (j=1;j<4;j++){
      if (j==1){
        suma_t_baja=suma_t_baja+info[i][j];
      }
      if(j==2){
        suma_t_media=suma_t_media+info[i][j];
      }
      if(j==3){
        suma_t_alta=suma_t_alta+info[i][j];
      }
    }
  }

  float prom_t_baja=suma_t_baja/3;
  float prom_t_media=suma_t_media/3;
  float prom_t_alta=suma_t_alta/3;
  printf("Promedio Temporada baja: %.2f\n",prom_t_baja);
  printf("Promedio Temporada media: %.2f\n",prom_t_media);
  printf("Promedio Temporada alta: %2.f\n",prom_t_alta);
}