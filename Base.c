#include<stdio.h>//Se creará un menú para crear una base de datos, para pedir los datos luego
#include<iostream.h>
#include<conio.h>
#include<windows.h>

using namespace std;

FILE *doc;

void muestrainfo(info *tarjeta);

int main()
{
 	int boton;
 	int a;
 	while(1)
	{
		system("cls");
		printf("Guardar datos presionar 1\n\nPedir datos presionar 2\n\nSalir presionar 3\n\n\n Consultar Base de datos 4\n\n\nLuego ENTER\n\n");
		scanf("%d", &boton);
		if(boton==1)
		{
			system("cls");
	    		doc = fopen("Palabras.txt","a+");
	   		printf("      Modo:        Guardar Datos\n\n/Los datos solo se guardan cuando se cierra como es debido/\n\nPonga alguna palabra");
	   		char nom[45];
	    		char resp;
	    		int n = 1;
	    		do{
				printf("\n\nTecla S=si...tecla N=no\n\nPalabra %d (con menos 44 caracteres pls)  : ",n);
				scanf("%s",nom);
				fprintf(doc,"%s/\n",nom);
				n++;
				printf("\n...SALIR DE AQUI? s/n");
				resp = getch();
				if(resp != 'n')
				{
					if(resp != 'N')
					{
					printf("\nEstas seguro de que quieres salir?");
			    		resp = getch();
			        	}
				}
	  		}while(resp == 'n' || resp == 'N');
	  	fclose(doc);
		}
		else if(boton==2)	
		{
			system("cls");
			printf("      Modo:        Pedir Datos\n\n");
			doc = fopen("Palabras.txt","r");
		    int d;
		    if(doc==NULL)
		    {
		    	int a,b,c=0,e=1,f=1;
		    	do{
		    		Sleep(2222);
		    		system("cls");
		    		for (e=1;e<c;e++)
				{
		 	   	     for(f=1;f<c;f++)
				     {
	 			    	std::cout<<".";
	 			  	Sleep(333);
			             }
				f=1;
				Sleep(222);
				system("cls");
			 
			       }
	    		       e=1;
	    		       system("cls");
	    		       c++;
		        }while(c<5);
			printf("ERROR EN LA APERTURA DEL ARCHIVO\n\n");
			Sleep(2222);
			return 1;
		    }
		    while((d=getc(doc))!=EOF)
		    {
			if(d=='\n'||d=='/') printf("\n");
			else if(d!='\n'&&d!='/') printf("%c",d);
		    }
		    printf("\n\nDesea continuar? Si es asi presione 1\n\n\n", boton);
		    scanf("%d",&a);
		    if(boton!=1)
		    {
		    	printf("\n\nMejor presione el 1\n\n\n", boton);
		    	scanf("%d",&a);
		    }
		    fclose(doc);
		}
		else if(boton==3)
		{
			return 0;
		}
		else
		{
			system ("cls");
			continue;
		}
	}
	return 0;
}

void muestrainfo(info *tarjeta)
{
	int i;
	for (i = 0; i < persona; i++)
	{
		printf("\ t \ t \ tNombre:% s \ tTeléfono:% s \ tEdad:% d \ n", card[i].name, card[i].tell, card[i].age);
	}
	sleep(2);
	getchar();
	getchar();			//Pulse cualquier tecla para continuar
}
