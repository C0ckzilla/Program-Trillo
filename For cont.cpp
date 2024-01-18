//Programa que nos indica el numero de numeros pares que hay de 0 a n (numero pedido al usuario)
//Hacer que funcione con numeros negativos
#include <stdio.h>
int main ()
{
	int contador=0;
	int i=0;
	int n;
	int mod;
	
	printf ("Dame n");
	scanf("%d", &n);
	if (n>0)
		{
	for (i=0; i<=n; i++ )
	{
		mod=i%2;
		if (mod==0) 
		{
			contador+=1;	
		}
		}
	printf ("Desde 0 hasta %d hay %d numeros pares", n, contador);		
	}
}