#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define LONGITUD 32 //Definimos la Longitud de caracteres que 

int main(){
	char clave[LONGITUD + 1];
	char pregunta;
	char caracter;
	char codigo[] = "GaletitaOreo000"; //Linea de "Contraseña", es decir, la respuesta.
	int i = 0; //Contador
	int respuesta1;
	Beep(1000,700);
	printf("¡Alto Ahi Forastero! La Clave o, ¡preparate a ser destruido!\n\n");
printf("                  /(        )`	   			\n");
printf("                  \ \___   / |				\n");
printf("                  /- _  `-/  '				\n");
printf("                 (/\/ \ \   /\				\n");
printf("                 / /   | `    \				\n");
printf("                  O O   ) /    |			\n");
printf("                  `-^--'`<     '			\n");
printf("                 (_.)  _  )   /				\n");
printf("                  `.___/`    /				\n");
printf("                    `-----' /				\n");
printf("       <----.     __ / __   \				\n");
printf("       <----|====O)))==) \) /====			\n");
printf("       <----'    `--' `.__,' \				\n");
printf("                    |        |				\n");
printf("                    \       /				\n");
printf("              ______( (_  / \______			\n");
	Sleep(5000);
	system("cls");
	while(1){
		Beep(900,600);
		printf("CLAVE: \n");
		while(caracter = getch()){
			if (caracter == 13){
				clave[i] = '.'; //Inicializador de modo secreto
				break;
			}else if(caracter == 8){
				if(i>0){
					i--;
					printf("\b \b");
				}				
			}else{
				if(i < LONGITUD){
					printf("%c", codigo[i]);
					clave[i] = caracter;
					i++;
				}
			}			
		}
		system("cls");
		Beep(1000,500);
		printf("\nMUY BIEN HUMANO, !PREGUNTAME LO QUE QUIERAS! LO SABRE. "); scanf("%c", &pregunta);
		Beep(500,600);
		printf("¡DEMASIADO FACIL!\n");
		Beep(500,600);
		Sleep(1000);
		printf("\nTU RESPUESTA ES...\n");
		Beep(1000,600);
		Sleep(2000);
		printf("\n %s\n", clave);
		Beep(500,600);
		Sleep(1000);
		printf("\nAhora preparate a ser destruido en 10 segundos...");
		Sleep(1000);
		printf("\n		9!\n");
		Sleep(1000);
		Beep(800,700);
		printf("\n		8!\n");
		Sleep(1000);
		Beep(800,700);
		printf("\n		7!\n");
		Sleep(1000);
		Beep(800,700);
		printf("\n		6!\n");
		Sleep(1000);
		Beep(800,700);
		printf("\n		5!\n");
		Sleep(1000);
		Beep(800,700);
		printf("\n		4!\n");
		Sleep(1000);
		Beep(800,700);
		printf("\n		3!\n");
		Sleep(1000);
		Beep(800,700);
		printf("\n		2!\n");
		Sleep(1000);
		Beep(800,700);
		printf("\n		1!\n");
		Sleep(1000);
		Beep(800,700);
		Beep(400,300);
		printf("\nEliminando todo rastro de tu existencia! See you in Hell!");
		Sleep(3000);
		system("cls");
		break;
	    }
		}


