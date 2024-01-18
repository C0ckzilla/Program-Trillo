//Realizar un programa que imprima los numeros del 30-0 con decrementos de 3

#include <stdio.h>
int main ()
{
	int i=30;
	
	while (i>=0) 
	{
		printf ("%d\n", i );
		i+=3;
	}
	printf ("\n");
}