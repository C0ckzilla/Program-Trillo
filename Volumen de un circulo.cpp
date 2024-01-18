//Llevar a cabo un programa con el siguiente Pseudocodigo//
//1.  Inicio//
//2.  Mostrar “Introduzca el diámetro, en metros” : Pedir D// 
//3.  Mostrar “Introduzca la altura, en metros” : Pedir H// 
//4.  R = D/2 : Pi = 3,141593//
//5.  V = Pi * (R ^ 2) * H//
//6.  Mostrar “El volumen del cilindro es de”, V, “metros cúbicos”//
//7.  Fin//
#include <stdio.h>
#include <math.h>
int main ()
{
	float diametro;
	float altura;
	float pi;
	pi=3.1416;
	float radio;
	float volumen;
	printf("Introduzca el valor del diametro en metros\n");
	scanf("%f", &diametro);
	printf("Introduzca el valor de la altura en metros\n");
	scanf("%f", &altura);
	radio= diametro/2;
	volumen= pi*pow(radio,2)*altura;
	printf("El volumen del circulo es de: %.2f metros cubicos\n", volumen);
	return 0;
}