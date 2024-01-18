/*Un triangulo rectangulo puede tener lados que sean todos enteros. El conjunto de 3
valores enteros para los lados de un triangulo rectangulo se conoce como una terna pitagorica.
Estos tres lados deben satisfacer la relacion de que la suma de los cuadrados de dos lados es
igual al cuadrado de la hipotenusa. Encuentre todas las ternas de Pitagoras para el cateto
opuesto, cateto adyacente e hipotenusa, todos ellos no mayores de 500.*/
#include <stdio.h>
int main ()
{
	int i;
	int j;
	int k;
	int sum_cuadrados;
	int op;
	int ady;
	int hip;
	for (i=1; i<=500; i++)
	{
		hip= i*i;
		for (j=1; j<=500; j++)
		{
			op=j*j;
			for (k=1; k<=500; k++)
			{
				ady=k*k;
				sum_cuadrados= op+ady;
				if (sum_cuadrados==hip)
				{
					printf ("\nCateto opuesto: %d, ", j);
					printf ("\nCateto Adyacente: %d, ", k);
					printf ("\nHipotenusa: %d, " , i);
				}
			}
		}	
	}
}

	
	
	
	



