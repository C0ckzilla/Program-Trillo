//Realizar un programa que pida el valor de n al usuario y entonces imprima los primeros n*2 terminos de la serie:
// 0,2,1,3,2,4,3,5,4,6,5,7

#include <stdio.h>
int main ()
{

int n; 
int cta=0;
printf("Dame n");
scanf ("%d", &n);
while (cta<=n)
{
	printf ("%d %d\n", cta, cta+2);
	cta++;
}
printf ("\n");
}