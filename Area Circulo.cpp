//Programa acerca de calcular el area de un circulo con radio 4.12
#include <stdio.h>
#include <math.h>
int main ()
{
	float radio= 4.12;
	float area, pi=3.1416;
	area= pi*radio*radio;
//Tambien se puede usar la funcion pow "area=pi*pow(radio,2);", incluyendo la libreria <math.h>//
	printf ("El area del circulo con radio %.2f es igual a: %.2f\n", radio, area);
//A la hora de agregar el formato, en este caso se agregó un .2 a "%f" para limitar el numero de decimales//
}