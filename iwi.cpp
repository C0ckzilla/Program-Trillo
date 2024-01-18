#include <stdio.h>
int main ()
{

int i;
int X[7]= {5, 27, 43, 12, 8, 7, 0};
printf("valor en indice 5: %d\n", X[5]);
printf("size del array= %ld\n", sizeof(X)); //%d
for(i=0; i<7; i++)
printf("X[%d]= %d\n",i, X[i]);
for(i=0; i<7; i++)
printf("X[%d]= %d\n",i, *(X+i));
printf("Primer elemento del array: %d = %d\n", X[0], *X);
*(X+2)=70;
printf("X[2]= %d = %d\n",X[2], *(X+2));
int *ip;
ip=X;
for(i=0; i<7; i++)
printf("X[%d]= %d = %d\n",i, *(ip+i), ip[i]);
}