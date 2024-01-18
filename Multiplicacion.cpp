//Realiza un programa que ponga ante el usuario  una multiplicacion (numeros aleatorios entre 1 y 10 y le pida su respuesta.
//A continuacion le diran que escriba el resultado y le indicaran si es correcto o no. Enseguida le preguntaran al usuario
//si desea continuar con otra multiplicacion y en caso afirmativo se repetira el proceso anterior.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()

{
	int n1, n2;
	srand (time(NULL));
	int resp;
	int resp_preg;
	do
	{
		
	
	n1=(rand()%10)+1;
	n2=(rand()%10)+1;
	
	printf ("%d x %d",n1, n2 ); scanf ("%d", &resp);
	
	if (resp==n1*n2) printf ("Es correcto\n");
	else printf("Es incorrecto\n");
	
	printf ("¿Quieres continuar?\n Si=1\No=2");
	scanf ("%d",&resp_preg );
}  while (resp_preg==1);
}