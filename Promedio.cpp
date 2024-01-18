#include<stdio.h>
int main()
{
	float Evaluaciones,i=0;
	float cal;
	float caln=0;
	int num_cal=1;
	float promedio_final;
	printf ("Introduce el numero de evaluaciones ");
	scanf("%f",&Evaluaciones);
	while(i<Evaluaciones)
	{
	
		printf("Introduce la calificacion de tu evaluacion numero %d\n",num_cal);
		scanf("%f",&cal);
		caln=caln+cal;
		i++;
		num_cal++;
	}
	
	promedio_final=caln*(1/Evaluaciones);
	printf("tu promedio fue de %f\n",promedio_final);
}
