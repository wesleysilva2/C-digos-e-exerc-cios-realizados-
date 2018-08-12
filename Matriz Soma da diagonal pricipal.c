#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
int numeros[3][3];
int I,J;

for(I=0;I<3;I++){
for(J=0;J<3;J++){

printf("Escreva o valor da matriz na posicao [%d][%d]: ", I,J);
scanf("%d",&numeros[I][J]);
}
}
printf("\n\n\tMatriz final\n\n"); //imprimira abaixo a matriz

printf("[%d]\t[%d]\t[%d]\n");
numeros[0][0];
numeros[0][1];
numeros[0][2];


printf("[%d]\t[%d]\t[%d]\n");
numeros[1][0];
numeros[1][1];
numeros[1][2];

printf("[%d]\t[%d]\t[%d]\n");
numeros[2][0];
numeros[2][1];
numeros[2][2];


printf("\n\nSoma das diagonais: \n\n");

printf("Diagonal 1\n\n");

printf("A soma da diagonal 1 e %d\n\n",numeros[0][0]+ numeros[1][1]+
numeros[2][2]); //essa é a diagonal na direção "/"
                //você pegará cada posição da matriz na diagonal "/" e somará.

printf("Diagonal 2\n\n");
printf("A soma da diagonal 2 e %d\n\n",numeros[0][2]+ numeros[1][1]+
numeros[2][1]); //essa é a diagonal na posicao "\"
                //você pegará cada posição da matriz na diagonal "\" e somará.

printf("\n\n");
system("PAUSE");

return 0;
}




