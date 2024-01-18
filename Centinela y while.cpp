//Programa que adivina la letra
#include <stdio.h>
int main ()
{
char entrada;
int centinela=0;
printf ("Adivina la letra\n");
scanf("%c", &entrada );

while (entrada!='z' && centinela <=3)
{
	printf("No le atinaste, Introduce otra letra\n");
	scanf(" %c", &entrada);
	centinela++;
}
	printf("Ya le atinaste!, en el intento %d\n", centinela+=1);
	printf ("centinela=%d\n", centinela);

}