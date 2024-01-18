//Realizar un programa que pida al usuario una cantidad entera en pesos y entonces indique cual es la 
//denominacion del billete o moneda mas grande que se puede tener en esa cantidad  de dinero.
//Considere billetes de 1000, 500, 200, 100, 50, 20
//Monedas 5, 10, 2 y 1. //
#include <stdio.h>
int main ()
{
	int entrada;
		printf("Ingrese una cantidad en denominacion pesos (mx)\n");
		scanf("%d", &entrada);
	if (entrada==1) 
	printf("Moneda 1");	
	if (entrada>=2 && entrada<5) printf("Moneda 2");
	if (entrada>=5 && entrada<10) printf("Moneda 5");
	if (entrada>10 && entrada<20) printf("Moneda 10");
	if (entrada>20 && entrada<50) printf("Billete 20");
	if (entrada>50 && entrada<100) printf("Billete 50");
	if (entrada>100 && entrada<200) printf("Billete 100");
	if (entrada>200 && entrada<500) printf ("Billete 200");
	if (entrada>500 && entrada<1000) printf("Billete 500");
	if (entrada>=1000) printf("Billete 1000");


	
}