/*Cristian Ariel López Santiago 
ejercicio 6
A continuación, se muestra un programa que genera un arreglo multidimensional de
máximo 10 renglones y 10 columnas, para poder almacenar datos en cada elemento y
posteriormente mostrar el contenido de esos elementos se hace uso de ciclos for anidados
respectivamente....*/

#include <stdio.h>
int main ()
{
    int lista[10][10]; // Se declara el arreglo multidimensional
    int i,j;
    int renglon,columna;
    printf("\nDa el número de renglones y columnas separados con coma\n");
    scanf("%d,%d",&renglon,&columna);
    if(((renglon>=1) && (renglon<=10))&&((columna>=1) && (columna<=10)))
      {
        // Acceso a cada elemento del arreglo multidimensional usando for
        for (i= 0 ; i <= renglon-1 ; i++)
          {
            for(j= 0 ; j <= columna-1 ; j++)
              {
                printf("\nNúmero para el elemento %d,%d del arreglo", i,j );
                scanf("%d",&lista[i][j]);
              }
          }
        printf("\nLos valores dados son: \n");
        // Acceso a cada elemento del arreglo multidimensional usando for
        for (i= 0 ; i <= renglon-1 ; i++)
          {
            for(j= 0 ; j <= columna-1 ; j++)
              {
                printf("%d ", lista[i][j]);
              }
            printf("\n");
          }
    }
  else printf("Los valores dados no es válido");
  printf("\n");
  return 0;
}
