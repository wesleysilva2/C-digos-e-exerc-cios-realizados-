#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

   int matriz[4][4];
   int i, n;

   for(i=0; i<4; i++){
    for(n=0; n<4; n++){

      printf("Digite um valor: ");
       scanf("%d", &matriz[i][n]);
    }
   }
      printf("\n");

   for(i=0; i<4; i++){
      for(n=0; n<4; n++){
        printf(" %d ", matriz[i][n] );
    }
        printf("\n");
   }

   system("pause");

   return 0;



}






