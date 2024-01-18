//Programa donde nos va a preguntar una calificacion y que en funcion de el valor obtenido 
//"0-3 reprobatorio critico" "3-5 reprobatoria" "5.5-5.9 reprobatoria con posibilidad" "6-7 regular" "8-9 adecuado" 
//"10 excelente"
#include <stdio.h>
int main ()
{
	float entrada;
	printf ("Ingresa tu calificacion\n");
	scanf ("%f", &entrada);
	
	if(entrada<=3 && entrada>=0) printf("Reprobatorio critico\n");
	else if (entrada>3 && entrada<5.5) printf("Reprobatorio\n");
	else if (entrada>=5.5 && entrada<6) printf("Reprobatrio con posibilidad\n");
	else if (entrada>=6 && entrada<=7) printf ("Regular\n");
	else if (entrada>=8 && entrada<=9) printf ("Adecuado\n");
	else if (entrada==10) printf("Excelente\n");
	else if (entrada>11) printf("Calificacion no valida\n");
	return 0;
}