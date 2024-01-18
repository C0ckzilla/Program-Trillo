/*Escriba un programa que: Solicite y reciba un número real de parte del usuario, y nos indique si
está contenido dentro de los límites predeterminados. El límite inferior será de -100 y el límite
superior será de 200.*/
#include <stdio.h>
int main ()
{
	int n;
	int lim_sup=200;
	int lim_inf=-100;
	
		printf ("Ingresa un numero real\n");
		scanf ("%d", &n);
	
	if (n>=lim_sup)
	{
		printf ("El numero %d supera el limite maximo", n);
	}
	else if (n<=lim_inf)
	{
		printf ("El numero %d supera el limite inferior", n);
	}
	else 
	{
		printf ("El numero %d esta dentro de los limites", n);
	}
	
}

