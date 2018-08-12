#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



/*13. Faça um algoritmo que receba o preço de custo e o preço de venda de 40 produtos.
Mostre como resultado se houve lucro, prejuízo ou empate para cada produto.
Informe media de preço de custo e do preço de venda. */


int main(){

int n,v,a,b;

float lucro,custo[40],venda[40],v1,v2;


for(n=0;n<40;n++){
 do{
 	printf("\ninforme o preço de custo do %i produto",n+1);
 	scanf("%f",&custo[n]);

 }while(custo[n]<0);

 }


for(v=0;v<40;v++){
 do{
 	printf("\ninforme o preço de venda do %i produto",v+1);
 	scanf("%f",&venda[v]);

 }while(venda[v]<0);

 }

v1 = 0;

v2 = 0;

for(a=0; a<n; a++){


    v1= v1 + custo[a];

}

for(b=0; b<v; b++){

    v2= v2 + venda[b];
}

lucro= v1 - v2;


 if(lucro == 0){

    printf("\nouve empate seu lucro e 0\n");

 }else if(lucro>0){


    printf("\nvoce lucrou $%f ta bom ne\n",lucro);

 }else{

    printf("\nvoce perdeu uma grana em $%f ferro\n",lucro);


 }


system("pause");
return 0;

}

