#include <stdio.h>//Se incluye la biblioteca para poder imprimir y leer en consola

/* Declaración de funciones */

//Se declara una funcion ue regresa un entero y recibe un apuntador  a otra funcion
//esta otra funcion regresa y recibe un entero
int misterio1(int (*fun) (int), int);
//Funcion que no regresa nada y recibe un apuntador a otra funcion
//esta otra no regresa nada y recibe unentero
void misterio2(void (*fun) (int), int);
//Declaracion de la funcion que regresa el cuadrado de un numero
int cuadrado_num(int);
//Declaracion de la funcion que imprime un numero
void imprime_num(int);

//La funcion principal
int main() 
{
  //Crea un apuntador a  la función la cual regresará un enter
  int (*fun1) (int);
  //Crea un apuntador a la función, la cual no regresa nada
  void (*fun2) (int);
  //Se hace que el apuntador de la función vaya a la dirección de memoria de cuadrado_num
  fun1 = &cuadrado_num;
  //El apuntador de esta funcion va a la direccion de memoria de imprime_num
  fun2 = &imprime_num;
  //Variable que es un entero pues la función misterio1 lo recibe
  //el parámetro es un apuntador a fun1
  //que es un apuntador a la función cuadrado_num, 
  //entonces misterio1 regresa 9, ya que la funcion cuadrado_num toma el parámetro 3.
  int var = misterio1(fun1, 3);
  //misterio2 toma un apuntador a una función fun2
  //la cual es un apuntador a imprime_num 
  //tambien recibe a var, el entero que regreso la funcion cuadrado_num
  //Entonces lo que hace es imprimir 9.
  misterio2(fun2, var);
}

//Funcion que regresa un entero
//Recibe un apuntador a una funcion la cual regresa un entero y recibe un entero
//Tambien recibe un numero entero
int misterio1(int (*fun) (int), int num)
{
  //Se regresa un entero
  return fun(num);
}

//No regresa nada
//Recibe un apuntador a una funcion, la cual no regresa nada y recibe un entero
//Tambien recibe un entero
void misterio2(void (*fun) (int), int num)
{
  //Ejecuta la funcion a la que fun apunta con el entero que recibe misterio2
  fun(num);
}

//Funcion que recibe un entero
int cuadrado_num(int num)
{
  //Regresa el cuadrado de ese entero
  return num * num;
}
//Funcion que recibe un entero
void imprime_num(int num)
{
  //inprime "Tada:" y el entero
  printf("Tada: %d\n", num);
}
