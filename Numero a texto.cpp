//Traduce un numero en letras del 1 al 3 (numero a letra)
#include <stdio.h>
int main ()
{
	int num;
	printf("Ingrese un numero\n");
	scanf("%d", &num);
	switch (num)
	{
		case 1:
			puts ("Uno");
			break;
				case 2:
				puts("Dos");
				break;
						case 3:
						puts("Tres");
						break;
								default:
								puts("Numero en desarrollo");
				
	}
	return 0;
}