// Programa que calcula el aumento de un empleado segun su salario
#include <stdio.h>
#include <math.h>
int main ()
{
	int salario;
	int salario_final; 
	printf ("Ingresa tu salario");
	scanf ("%d", &salario);
	
	if (salario>0 && salario <=9000)
	{
		salario_final= salario*.20+salario;
		printf ("Tienes un aumento del 20 porciento! Tu nuevo sueldo es: %d", salario_final);
	 } 
	 if (salario>9001 && salario <15000)
	{
		salario_final= salario*.10+salario;
		printf ("Tienes un aumento del 10 porciento! Tu nuevo sueldo es: %d", salario_final);
	 } 
	 if (salario>15000 && salario <=20000)
	{
		salario_final= salario*.5+salario;
		printf ("Tienes un aumento del 5 porciento! Tu nuevo sueldo es: %d", salario_final);
	 } 
	 if (salario>20001)
	 {
	 	printf ("No tienes aumento, tu salario sigue siendo de %d", salario);
	 }
}