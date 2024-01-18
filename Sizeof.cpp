//En este programa se ve cuanto espacio en bytes abarca la variable entera, utilizando sizeof//
#include <stdio.h>
int main ()
{
	int a;
	int tamano;
	a= 100;
	tamano= sizeof (a);
	printf("El valor es: %d\n ",tamano);
	return 0;
}
