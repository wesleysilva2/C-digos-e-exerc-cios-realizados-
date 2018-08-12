#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


/* Faça um algoritmo que receba o nome e a idade de 10 pessoas que têm idades distintas
e mostre uma mensagem informando quem é o mais velho da lista, quem é o mais novo da
lista e quantas pessoas são maiores de idade (maior ou igual a 18 anos).*/


int main(){

int idade,teste, p;

do{
 printf("informe quantas pessoas vc quer cadatrar: ");
 scanf("%d", &p);
}while(p<=0);

int pessoas[p];


for(idade=0; idade<=p; idade++){

    do{
        printf("informe a idade da pessoa:%d ",idade+1);
        scanf("%d",&pessoas[idade]);

    }while(pessoas[idade]<0 || pessoas[idade]>99);
}

if(pessoas[idade]>=18){

    printf("Maiores de idade sao:%d\n");
    scanf("%d",&pessoas[idade]);
}

}



