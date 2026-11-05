/*Cristian Ariel López Santiago 
ejercicio 6
se genera un arreglo
de dos dimensiones (arreglo multidimensional) y se accede a todos sus elementos por la
posición que indica el renglón y la columna a través de dos ciclos do-while, uno anidado
dentro de otro, el contenido de cada uno de los elementos de este arreglo es la suma de
sus índices...*/

#include<stdio.h>
int main()
{
    int i,j,a[5][5];
    i=0;
    do //Representa al renglón del arreglo
      {
        j=0;
        do //Representa a la columna del arreglo
          {
            a[i][j]=i+j;
            printf("\t%d, ",a[i][j]);
            j++;
          }
        while (j<5);
        printf("\n");
        i++;
      }
  while (i<5);
  return 0;
}
