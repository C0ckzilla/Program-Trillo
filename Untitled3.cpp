//Se piden 2 numeros enteros de 2 digitos cada uno. En caso de que un numero no tenga 2 digitos, se debera volver a solicitar cuanto sea necesario. Cuando el planteamiento sea correcto
//,sacar promedio
#include <stdio.h>
int main ()
{
	int a,b, suma, ev=2;
	float prom;
	printf("Ingrese dos numeros enteros de dos digitos");
	scanf("%d %d",&a, &b);
	suma=a+b;
	prom=suma*1/ev;
	
	if (a>99)
	{
	printf("Numeros no validos, Ingrese dos numeros enteros de dos digitos");
	scanf("%d %d",&a, &b);
	}
	if (b>99)
	{
	printf("Numeros no validos, Ingrese dos numeros enteros de dos digitos");
	scanf("%d %d",&a, &b);
	}
	printf("Tu promedio de %d y %d es: %f", a, b, prom);
}