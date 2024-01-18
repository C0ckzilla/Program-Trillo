#include <stdio.h>
int main ()
{
	int a, b, mayor;
	puts("Introduce dos numeros enteros separados por espacio");
	scanf("%d %d",&a, &b);
	
	mayor=a>b ? printf("El mayor es: %d \n", a): printf ("El mayor es: %d \n",b);
	return 0;
	
}