#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*12. Uma concession�ria de ve�culos est� vendendo os
seus ve�culos com desconto. Fa�a um algoritmo que
calcule e exiba o valor do desconto e o valor a ser
pago pelo cliente de v�rios carros. O desconto dever� ser
calculado de acordo com o ano do ve�culo. At� 2000 - 12% e
acima de 2000 - 7%. O sistema dever� perguntar se deseja
continuar calculando desconto at� que a resposta seja: �(N) N�o�.
Ao final, informar total de carros com ano at� 2000 e total geral de ve�culos.*/



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
