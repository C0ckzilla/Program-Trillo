/*Escriba un programa que solicite dos números e indique si uno es divisor del otro*/
#include <stdio.h>
int main ()
{
	int n1;
	int n2;
	
		printf ("Ingrese el primer numero");
		scanf ("%d", &n1);
		printf ("Ingrese el segundo numero");
		scanf ("%d", &n2);
		if (n2>=n1)
		{
			printf ("No son divisores yan que %d es mayor que %d", n2, n1);
		}
		else if (n1%n2==0)
		{
			printf ("%d es divisor de %d", n2, n1);	
		}
		else if (n1%n2!=0)
		{
			printf ("%d no es divisor de %d", n2, n1);
		}
		
			
	 

	
		
	
		
	
}
	
		
