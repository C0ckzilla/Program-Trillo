	//Programa que imprime la tabla de valores de los tipos de variables, con tipo, tamaño y rango//
#include <stdio.h>
int main ()
{
	//variables//
	char a;
	int tamano_a;
	short b;
	int tamano_b;
	int c;
	int tamano_c;
	unsigned int d;
	int tamano_d;
	long e;
	int tamano_e;
	float f;
	int tamano_f;
	double g;
	int tamano_g;
	//Valor en bytes de cada tipo de variable
	tamano_a= sizeof(a);
	tamano_b= sizeof(b);
	tamano_c= sizeof(c);
	tamano_d= sizeof(d);
	tamano_e= sizeof(e);
	tamano_f= sizeof(f);
	tamano_g= sizeof(g);
	//Impresiones en la pantalla de valores//
	 printf("El valor de la variable de caracter es de: %d bytes\n\n", tamano_a);
	 printf("El valor de la variable corta es de: %d bytes\n\n", tamano_b);
	 printf("El valor de la variable entera es de: %d bytes\n\n", tamano_c);
	 printf("El valor de la variable unsigned int es de: %d bytes\n\n", tamano_d);
	 printf("El valor de la variable larga es de: %d bytes\n\n", tamano_e);
	 printf("El valor de la variable flotante es de: %d bytes\n\n", tamano_f);
	 printf("El valor de la variable double es de: %d bytes\n\n", tamano_g);
    	return 0;
}