#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*22. Elabore um algoritmo que, dada a idade de um nadador. Classifique-o em uma
das seguintes categorias:

Infantil A = 5 - 7 anos
Infantil B = 8 - 10 anos
juvenil A = 11- 13 anos
juvenil B = 14 - 17 anos
Sênior = 18 - 25 anos

Apresentar mensagem “idade fora da faixa etária” quando for outro ano não contemplado.
*/


int main(){

int idade;

printf("\npor favor digite sua idade:");
scanf("%d",&idade);

if(idade>=5 && idade<=7){

    printf("Voce integrara a Turma infantil A\n");

 }else if(idade>=8 && idade<=10 ){

     printf("Voce integrara a Turma infantil B\n");

   }else if(idade>=11 && idade<=13 ){

       printf("Voce integrara a Turma Juvenil A\n");

     }else if(idade>=14 && idade<=17 ){

         printf("Voce integrara a Turma Juvenil B\n");

       }else if(idade>=18 && idade<=25 ){

           printf("Voce integrara a Turma Senior\n");

}else{

  printf("idade incorreta");

}




system("pause");
return 0;

}

