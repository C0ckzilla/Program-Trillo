//Realizar un programa que pida la edad del usuario y entonces lo clasifique (en años cumplidos) 
//y entonces lo clasifique de acuerdo a lo siguiente
//De 1 a 11 niño, De 12 a 17 adolescente, de 18 a 59 Adulto, de 60 en adelante adulto mayor
#include <stdio.h>
int main()
{
	int edad;
	printf("Ingresa tu edad\n");
	scanf("%d", &edad);
	if (edad<=11) printf("Nino\n");
	else if (edad>=12 && edad<=17) printf("Adolescente\n");
	else if (edad>=18 && edad<=59) printf("Adulto\n");
	else printf("Adulto mayor\n");
}