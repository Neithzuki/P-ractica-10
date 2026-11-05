/*Cristian Ariel López Santiago 
ejercicio 4
un programa que permite generar un arreglo de dos
dimensiones (arreglo multidimensional) y accede a sus elementos por la posición que
indica el renglón y la columna a través de dos ciclos while, uno anidado dentro de otro,
el contenido de cada elemento de este arreglo es la suma de sus índices..*/

#include<stdio.h>
int main()
{
  int i,j,a[5][5];
  i=0;
  while (i<5) //Representa al renglón del arreglo
    {
      j=0;
      while (j<5) //Representa a la columna del arreglo
        {
      
          a[i][j]=i+j;
          printf("\t%d, ",a[i][j]);
          j++;
        }
      printf("\n");
      i++;
    }
  return 0;
}
