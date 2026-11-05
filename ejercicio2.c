/*Cristian Ariel López Santiago 
ejercicio 2
El siguiente programa genera un arreglo de dos dimensiones (arreglo
multidimensional) y accede a sus elementos por la posición que indica el renglón y la
columna a través de dos ciclos for, uno anidado dentro de otro, el contenido de cada
elemento de este arreglo es la suma de sus índices*/

#include<stdio.h>
int main()
{
    int i,j,a[5][5];
    for (i=0 ; i<5 ; i++)//Representa al renglón del arreglo
      {
        for (j=0 ; j<5 ; j++)//Representa a la columna del arreglo
      {
          a[i][j]=i+j;
          printf("\t%d, ",a[i][j]);
      }
    printf("\n");
  }
return 0;
}
