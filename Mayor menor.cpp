#include <stdio.h>
int main ()
{
	int a;
	int b;
	int mayor;
	
	printf("Introduzca dos numeros enteros\n");
	scanf("%d %d", &a, &b);
	
	if (a==b)
	{
		puts("Son iguales");
	}
	else if (a<b)
	{
		mayor=b;
		printf ("%d es mayor", mayor);
	}
	else if (a>b)
	{
		mayor=a;
		printf("%d es mayor", mayor);
	}
	return 0;
}