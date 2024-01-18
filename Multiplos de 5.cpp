// Realiza un programa que imprma los nueros pares que hay del 0 al 30 exceptuando los que sean multiplos de 5

#include <stdio.h>
int main ()
{

int n;
int cta=0;
while (cta<=30)
{
	
	if (cta%5!=0) printf ("%d\n", cta);
	cta+=2;
	
}
printf ("\n");
}
