//Programa en el cual se pida una letra, el cual debe decir si es vocal o no
//El switch sirve solo para igualdades, el if para todo
#include <stdio.h>
int main()
{
	char entrada;
	printf ("Ingrese una letra\n");
	scanf ("%c", &entrada);
	switch (entrada)
	{
			case 'a':
			printf ("La %c es una vocal", entrada);
								break;
			case 'e':
			printf ("La letra %c es una vocal", entrada);
								break;
			case 'i':
			printf ("La letra %c es una vocal", entrada);
								break;
			case 'o':
			printf ("La letra %c es una vocal", entrada);
								break;
			case 'u':
			printf ("La letra %c es una vocal", entrada);
								break;
			case 'A':
			printf ("La letra %c es una vocal", entrada);
								break;
			case 'E':
			printf ("La letra %c es una vocal", entrada);
								break;
			case 'I':
			printf ("La letra %c es una vocal", entrada);
								break;
			case 'O':
			printf ("La letra %c es una vocal", entrada);
								break;
			case 'U':
			printf ("La letra %c es una vocal", entrada);
								break;
			default:
			printf ("La letra %c es una consonante", entrada);
	}
	return 0;
}