//Realizar un programa que imprima los primeros n numeros pares (n es dado por el usuario)
#include <stdio.h>
int  main ()
{

int n;
int n2=2;

printf ("Ingrese un numero");
scanf ("%d", &n);
while (n>0)
//Tambien se puede hacer el programa creando una cuenta, que lleve el control de las veces que se repite en la condicion
{
	printf("%d ", n2);
	n2+=2;
	//n-- es para parar una cuenta en una varable/contador
	n--;
}
 	printf("\n");
}
