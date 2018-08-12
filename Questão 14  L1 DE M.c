#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*14. Faça um algoritmo que leia dois números e identifique se são iguais
ou diferentes. Caso eles sejam iguais imprima uma mensagem dizendo que
eles são iguais. Caso sejam diferentes, informe qual número é o maior,
e uma mensagem que são difereentes. */


int main(){

int n1,n2;

printf("\npor favor digite primeiro numero:");
scanf("%d",&n1);

printf("\npor favor digite segundo numero:");
scanf("%d",&n2);


if(n1==n2){

    printf("\nos numeros sao iguais\n");

}else if(n1>n2){



     printf("\nsao diferentes pois %d e maior que %d\n",n1,n2);

}else{


     printf("\nsao diferentes pois %d e maior que %d\n",n2,n1);


}


system("pause");
return 0;

}

