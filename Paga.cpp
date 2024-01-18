//Programa acerca de sacar la paga neta de un empleado en base a los datos que se le piden//
#include <stdio.h>
int main ()
{
	float ht; //horas trabajadas
	float to; //tarifa horaria
	float ti; //tasa de impuestos
	float sb; //salario base
	float imp; //impuestos
	float pn; //paga neta
	
	printf("Ingrese el numero de horas trabajadas:");
		scanf("%f", &ht);
	printf("Ingrese la tarifa horaria:");
		scanf("%f", &to);
	printf("Ingrese la tasa de Impuestos:");
		scanf("%f", &ti);
	sb= ht*to;
	imp= sb*(ti/100);
	pn=sb-imp;
	printf("Tu paga neta es: %.1f mx\n", pn); //8 hrs,$200,16%
		return 0;
}