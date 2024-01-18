//Realizar un programa que pida al usuario una cantidad entera en pesos y entonces indique cual es la  denominacion del
// billete o moneda mas grande que se puede tener en esa cantidad  de dinero.
//Considere billetes de 1000, 500, 200, 100, 50, 20
//Monedas 5, 10, 2 y 1.con else
#include <stdio.h>
int main ()
{
	int entrada;
		printf("Ingrese una cantidad en denominacion pesos (mx)\n");
		scanf("%d", &entrada);
	if (entrada==1) printf("Moneda 1");	
	else if (entrada<5) printf("Moneda 2");
	else if (entrada<10) printf("Moneda 5");
	else if (entrada<20) printf("Moneda 10");
	else if (entrada<50) printf("Billete 20");
	else if (entrada<100) printf("Billete 50");
	else if (entrada<200) printf("Billete 100");
	else if (entrada<500) printf ("Billete 200");
	else if (entrada<1000) printf("Billete 500");
	else printf("Billete 1000");


	
}