#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*12. Uma concessionária de veículos está vendendo os
seus veículos com desconto. Faça um algoritmo que
calcule e exiba o valor do desconto e o valor a ser
pago pelo cliente de vários carros. O desconto deverá ser
calculado de acordo com o ano do veículo. Até 2000 - 12% e
acima de 2000 - 7%. O sistema deverá perguntar se deseja
continuar calculando desconto até que a resposta seja: “(N) Não”.
Ao final, informar total de carros com ano até 2000 e total geral de veículos.*/



int main(){

int ano;
float pagamento,desconto;
char r;

do{


 printf("informe o valor que vc pagou no carro:");
 scanf("%f",&pagamento);
 printf("iforme ano do carro:");
 scanf("%d",&ano);

   if(ano<=2000){

     desconto=pagamento*12/100;

     printf("seu desconto e de:$%f sobre o valor de sua compra\n",desconto);



   }else{

     desconto=pagamento*7/100;

     printf("seu desconto e de:R$ %f sobre o valor de sua compra\n",desconto);

   }

}while(pagamento == 0 || ano == 0);

do{

printf ("Continuar? (s/n): \n");

scanf ("%c", &r);

  if ((r!='s') || (r!='n')) {

        printf ("Erro\n");
  }

} while(r=='n');

system("pause");
return 0;


}
