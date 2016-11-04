#include <stdio.h>//incluimos la biblioteca para poder imprimir y leer de consola

//La función swap dados dos apuntadores, intercambiará el contenido de las variables.
void swap(int *a, int *b)//La función pide de parámetro dos apuntadores a enteros.
{
  //variable auxiliar va a ser igual al contendo de la dirección de memoria del apuntador a la variable a.
  int aux = *a;
  //Intercambiando el contenido de los apuntadores dados.
  *a = *b;
  *b = aux;
}

//creamos la funcion main para ver lo que hace nuestra funcion swap
int main()
{
  //Declaramos las variables 
  int a = 7;
  int b = 9;
  
  printf("Swap\n");//imprimimos el nombre de la funcion(Para que se vea padre)
  printf("Antes de llamar a la funcion swap\n"); //imprimimos el eninciado para ver en que haremos primero
  printf("Valor de a %d y de b %d\n", a, b);
  
  swap(&a, &b);//recibimos la direccion de memoria
  printf("Después de llamar a swap\n");//los nuevos valores seran imprimidos
  printf("Valor de a es %d y de b es %d\n", a, b);//se imprimen los nuevos valores
  
  return 0;
}