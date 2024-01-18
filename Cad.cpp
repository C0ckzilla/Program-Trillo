//Pedir tres cadenas al usuario e indique cual de ellas es la mas larga
#include <stdio.h>
#include <string.h>
int main ()
{
	char cad1[50];
	char cad2[30];
	char cad3[40];
	int long1;
	int long2;
	int long3;
	printf("Dame la cadena 1");
	scanf("%s", cad1);
	printf("Dame la Cadena 2");
	scanf("%s", cad2);
	printf("Dame la Cadena 3");
	scanf("%s", cad3);
	long1=strlen(cad1);
	long2=strlen(cad2);
	long3=strlen(cad3);
	printf("%d\n", long1);
	printf("%d\n", long2);
	printf("%d\n", long3);
	//Condiciones de mayor
	if (long1>long2 && long1>long3)
	{
		printf("La primera cadena es la mas larga\n");
	}
	if (long2>long1 && long2>long3)
	{
		printf("La segunda cadena es la mas larga\n");
	}
	if (long3>long2 && long3>long1)
	{
		printf("La tercera cadena es la mas larga\n");
	}
	if (long1==long2 && long1==long3) printf("Todas son iguales");
	else if(long1==long3)
	{
		printf("La tercera y la primera son las mas largas");
	}
	else if (long1==long2)
	{
		printf("La primera y segunda son iguales");
	}
	else if(long3==long2)
	{
		printf("La tercera y segunda son iguales");
	}
	else if (long1==long2 && long1==long3) printf("Todas son iguales");
}