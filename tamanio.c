#include <stdio.h>//incluimos la biblioteca para poder imprimir y leer de consola

int main()//declaro la funcion principal
{
  //Se imprime el tamaño de cada uno de los tipos usando la funcion sizeof().
  //use %d pues sizeof regresa un unsigned long.
  printf("El tipo short tiene tamaño %d bytes\n", sizeof(short));
  printf("El tipo int tiene tamaño %d bytes\n", sizeof(int));
  printf("El tipo unsigned int tiene tamaño %d bytes\n", sizeof(unsigned int));
  printf("El tipo apuntador a int tiene tamaño %d bytes\n", sizeof(int*));
  printf("El tipo char tiene tamaño %d bytes\n", sizeof(char));
  printf("El tipo float tiene tamaño %d bytes\n", sizeof(float));
  printf("El tipo double tiene tamaño %d bytes\n", sizeof(double));

  return 0; //regresamos 0
}