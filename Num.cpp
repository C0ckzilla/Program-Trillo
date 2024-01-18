//Programa 1. Pedir dos numeros enteros al usuario y determinar si ambos numeros, uno de ellos o nignuno tiene mas de tres digitos.
#include <stdio.h>
int main()
{
	int n1;
	int n2;
	//Ambos numeros son de 3 digitos o menos solo si el numero es menor que 999.
	printf("Dame el primer numero ");
	scanf("%d", &n1);
	printf("Dame el segundo numero ");
	scanf("%d", &n2);
	if(n1<=999 && n2<=999)
	{
		printf("Ambos numeros son de 3 digitos o menos");
	}
	//Solo un numero es de 3 digitos o mas, el otro tiene mas de 3 digitos
	if(n1<=999 && n2>999 || n1>999 && n2<=999)
	{
		printf("Solo uno tiene mas de tres digitos");
	}

	if (n1>999 && n2>999)
	{
		printf("Ambos tienen mas de tres digitos");
	}
}
