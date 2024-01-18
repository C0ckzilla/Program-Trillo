//Escriba un programa que solicite un número entero x, calcule y regrese el valor de ex
#include <stdio.h>
int main ()
{
	int entrada;
	int factorial=1;
	
	printf ("Digita un numero entero\n");
	scanf ("%d", &entrada);
	
	for (int i=1; i<=entrada; i++)
	{
		factorial= factorial*i;
	}
	printf ("El numero factorial de %d es %d", entrada, factorial);
}
