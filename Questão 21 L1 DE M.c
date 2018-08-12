#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*21. A escola “BRASIL” faz o pagamento de seus professores por hora/aula.
Faça um algoritmo que calcule e exiba o salário de um professor. Sabe-se que
o valor da hora/aula segue a tabela abaixo:

Professor Nível 1: R$12,00 por hora/aula

Professor Nível 2: R$17,00 por hora/aula

Professor Nível 3: R$25,00 por hora/aula */


int main(){

int nivel;

float valor,resultado;

printf("digite a sua quantidade de horas trabalhadas:");

scanf("%f",&valor);

printf("\ndigite o seu nivel de professor de 1 a 3:");

scanf("%d",&nivel);

switch(nivel){

  case 1 :resultado=valor*12;

           printf("\nseu salario e %f\n",resultado);break;

  case 2 :resultado=valor*17;

           printf("\nseu salario e %f\n",resultado);break;

  case 3 :resultado=valor*25;

           printf("\nseu salario e %f\n",resultado);break;

  default :printf("\nnivel inesistente.....\n");



}
system("pause");
return 0;

}

