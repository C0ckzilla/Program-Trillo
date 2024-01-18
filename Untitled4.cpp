//Se piden 2 numeros enteros de 2 digitos cada uno. En caso de que un numero no tenga 2 digitos, se debera volver a solicitar cuanto sea necesario. Cuando el planteamiento sea correcto
//,sacar promedio
#include <stdio.h>
int main ()
{
	float a,b, suma, ev=2, cent=0;
	float prom;
	printf("Ingrese dos numeros enteros de dos digitos");
	scanf("%f %f",&a, &b);
    do 
	{
	printf("Numeros no validos, Ingrese dos numeros enteros de dos digitos");
	scanf("%f %f",&a, &b);
	cent++;
	}
	while (a>99 && b>99 && cent>99);
	 if (a<99 && b<99) {
	suma=a+b;
	prom=suma*(1/ev);
printf("Tu promedio de %f y %f es: %f", a, b, prom);

}

	

	
	
}