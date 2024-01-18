//Programa que adivina la letra
#include <stdio.h>
int main ()
{
char entrada;
printf ("Adivina la letra\n");
scanf("%c", &entrada );

while (entrada!='z')
{
	printf("No le atinaste, Introduce otra letra\n");
	scanf(" %c", &entrada);
	
}
	printf("Ya le atinaste!\n") ;

}