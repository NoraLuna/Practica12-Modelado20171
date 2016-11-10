//incluye la biblioteca para poder leer y escribir en consola
#include <stdio.h>

//Declaramos funcion bubble sort
void bubble_sort(int *arrg, int longitud){
 //variable que usamos para saber cuando el valor este ordenado
  int ordenado = 1;
  //evitar mas comparaciones
  int j = 0;

  //Mueve el valor mientras no este ordenado
  while( ordenado == 1 ){

    //lo declaramos falso para saber cuando este ordenado
    ordenado = 0;
    //vamos decreciendo hasta la posición que se debe comparar
    j ++;
    //variable para recorrero los valores del arreglo
    int i;
    //recorremos los valores del arreglo
    for(i = 0; i < (longitud-j) ; i++ )
      //en caso de que el primer valor sea mayor al segundo se intercambian
      if( *(arrg+i) > *(arrg+i+1) ){

        //asignamos el valor a la variable aux
        int aux = *(arrg+i);
        //asignamos el valor de (arrg+i+1) al apuntador (arrg+i)
        *(arrg+i) = *(arrg+i+1);
        //asignamos el valor de la variable aux al apuntador (arrg+i+1)
        *(arrg+i+1) = aux;

        //el valor ya esta ordenado
        ordenado = 1;


      }

  }

}
//Declaramos la funcion principal 
int main(){
  //Declaramos un arreglo para probar
  int arreglo[] = {100,55,77,33,22,7,9,0,1,3,5,8,6,4,2,1,-9};
  //tamaño del arreglo
  int tam = sizeof(arreglo)/sizeof(arreglo[0]);
  int x;//variable para recorrer el arreglo e imprimirlo
  //recorremos el arreglo para imprimirlo
  for(x = 0; x<tam; x++ )
    //imprimimos el arreglo sin ordenar
    printf( "%d ", arreglo[x] );

  //llamamos a la función bublle sort y le pasamos la dirección en memoria del arreglo
  bubble_sort( &arreglo[0], tam);

  //imprimimos un enter para que no se impriman en la misma linea
  printf("\n");
  int y;//variable para recorrer el arreglo ordenado
  //recorremos el arreglo para imprimirlo
  for(y = 0; y<tam; y++ )
    //imprimimos el arreglo ordenado
    printf( "%d ", arreglo[y] );
    printf("\n");
  //Regresamos 0
  return 0;
}