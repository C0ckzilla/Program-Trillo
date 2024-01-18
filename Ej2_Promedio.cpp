//Se piden 2 numeros enteros de 2 digitos cada uno. En caso de que un numero no tenga 2 digitos, se debera volver a solicitar cuanto sea necesario. Cuando el planteamiento sea correcto
//,sacar promedio
#include <stdio.h>
int main ()
{
	float a,b, suma, ev=2, limite=99;
	float prom;
	printf("Ingrese dos numeros enteros de dos digitos");
	scanf("%f %f",&a, &b);

	if (a>100 || b>100)
	{
	while (a>100 || b<100 && a<100 && b<100)
	{
	printf("Numeros no validos, Ingrese dos numeros enteros de dos digitos");
	scanf("%f %f",&a, &b);
}
}
 if (a<=100 && b<=100)
{
	suma=a+b;
	prom=suma*(1/ev);
	printf("Tu promedio de %f y %f es: %f", a, b, prom);
}
}

//Solo hacia falta poner los ||, no recordaba el simbolo del or, literalmente era lo unico que tenia mal, no lo vi en mis notas hasta llegando a casa, espero considere valermelo por 
//menos a la mitad, Un saludo!!