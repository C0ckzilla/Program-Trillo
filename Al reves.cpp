//Programa que invierte el numero dado por el usuario
//Octavio Antonio Juarez Romero
#include <stdio.h>
int main ()
{
	int numero;
	printf ("Ingresa el numero\n");
	scanf ("%d", &numero);
	do 
	{
		printf ("%d", numero%10);
		numero/=0;
	}
	while (numero !=0);
}