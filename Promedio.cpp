//Programa acerca de sacar el promedio de 5 calificaciones (valores) dados por el usuario//
#include <stdio.h>
#include <math.h>
int main ()
{
	int cal1;
	int cal2;
	int cal3;
	int cal4;
	int cal5;
	float division;
	float suma;
	float promedio;
	printf("Introduce la primera calificacion:");
		scanf("%d", &cal1);
	printf("Introduce la segunda calificacion:");
		scanf("%d", &cal2);
	printf("Introduce la tercera calificacion:");
		scanf("%d", &cal3);
	printf("Introduce la cuarta calificacion:");
		scanf("%d", &cal4);
	printf("Introduce la quinta calificacion:");
		scanf("%d", &cal5);
	suma= cal1+cal2+cal3+cal4+cal5;
	division= suma/5;
	promedio=division;
	printf("Promedio= %.1f\n", promedio);
	
	if(promedio>=6)
	{
		printf("Haz aprobado");
	}
	else
	{
		printf("Reprobado");
	}
		//Condicionante para ver si el usuario aprobó!//
}