//Los operadores logicos en este caso, DUPLICAN los valores//
#include <stdio.h>
int main ()
{
	int a=3;
	int b=4;
	int c=-2;
		printf ("Valores de %d %d %d\n",a, b, c);
	a<<=1;
	b<<=1;
	c<<=1;
		printf ("Valores de %d %d %d\n",a, b, c);
	a>>=1;
	b>>=1;
	c>>=1;
		printf ("Valores de %d %d %d\n",a, b, c);
	return 0;
}