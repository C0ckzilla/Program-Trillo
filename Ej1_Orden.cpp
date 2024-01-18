//Pide 4 numero enteros, decir si estan ordenados, en caso de que alguno sea negativo, no sera valido
#include <stdio.h>
int main ()
{
	int a,b,c,d;
	
	printf ("Ingrese 4 numeros enteros");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if (a<b && b<c && c<d) 
	{
		printf ("Los numeros estan ordenados");
	}
	else 
	{
		printf ("Los numeros no estan ordenados");
	}
	if (a<0)
	{
		printf ("Es invalido, ya que hay un numero o mas negativo");
	}
	if (b<0)
	{
		printf ("Es invalido, ya que hay un numero o mas negativo");
	}
	if (c<0)
	{
		printf ("Es invalido, ya que hay un numero o mas negativo");
	}
	if (d<0)
	{
		printf ("Es invalido, ya que hay un numero o mas negativo");
	}
	
}