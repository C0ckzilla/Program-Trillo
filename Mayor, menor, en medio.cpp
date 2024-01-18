//Programa que reciba 3 numeros enteros nos diga quien es el mas grande, cual es el mas pequeño y cual esta en medio//
#include <stdio.h>
#include <math.h>
int main ()
{
	//Declaracion de variables
	int a;
	int b;
	int c;
	// Escaner de datos alojados en variables
	printf ("Ingrese el primer numero\n");
	scanf("%d", &a);
	printf ("Ingrese el segundo numero\n");
	scanf("%d", &b);
	printf ("Ingrese el tercer numero\n");
	scanf("%d", &c);
	//Condiciones de mayor//
	if (a>b && a>c) printf ("El numero mayor es %d\n", a);
	else if(b>a && b>c) printf ("El numero mayor es %d\n", b);
	else if(c>a && c>b) printf ("El numero mayor es %d\n", c);
	//Condiciones de  menor//
	if (a<b && a<c) printf("El numero menor es %d\n", a);
	else if (b<a && b<c) printf("El numero menor es %d\n", b);
	else if(c<a && c<b) printf("El numero menor es %d\n", c);
	//Condiciones de en medio//
	if (a<b && a>c) printf("El numero de en medio es %d\n", a);
	else if (a>b && a<c) printf("El numero de en medio es %d", a); 
	if (b<a && b>c) printf("El numero de en medio es %d\n", b);
	else if (b>a && b<c) printf ("El numero de en medio es %d\n", b);
	if (c<a && c>b) printf("El numero de en medio es %d\n", c);
	else if (c>a && c<b) printf ("El numero de en medio es %d\n",c);
}
