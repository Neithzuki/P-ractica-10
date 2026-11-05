/*Cristian Ariel López Santiago 
ejercicio 2
El código que se observa a continuación genera un arreglo de dos dimensiones (arreglo
multidimensional) y accede a sus elementos por la posición que indica el renglón y la
columna a través de dos ciclos while, uno anidado dentro de otro.*/

#include<stdio.h>

int main()
{
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j;//indices
    printf("Imprimir Matriz\n");
    i=0;
  
    while(i<3) //Representa al renglón del arreglo
      {
          j=0; //contadores
          while (j<3)//Representa a la columna del arreglo
      {
        printf("%d, ",matriz[i][j]);
        j++;
      }
    printf("\n");
    i++;
  }
return 0;
}
