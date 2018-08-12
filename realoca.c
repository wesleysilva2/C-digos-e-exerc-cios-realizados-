#include <stdio.h>
#include <stdlib.h>


int main()
{

    int i=0, num1, cont1;
    char num2[1];

    printf("Quantos numeros vc quer armazenar?");
    scanf("%d",&cont1);

    //int *numeros[cont1];

    int *numeros =(int *) malloc(sizeof(int) );

    for(i=1; i<=cont1; i++){
          printf("informe os numeros");
          scanf("%d",&numeros[i]);
          }
   for(i=1; i<=cont1; i++){
            printf("%d\n", numeros[i]);
}
   printf("Deseja inserir mais numeros? S ou s para sim e N ou n para nao ");
   scanf("%s",&num2);

   if(num2 == "S" || "s"){
           printf("Quantos numeros vc quer armazenar?");
           scanf("%d",&cont1);
           numeros = (int *) realloc(sizeof(int) );
           for(i=1; i<=cont1; i++){
                    printf("informe os numeros");
                    scanf("%d",&numeros[i]);
           }
           for(i=1; i<=cont1; i++){
                    printf("%d\n", numeros[i]);
           }
   } else{
     exit(1);
   }
   system("Pause");
      return 0;
}
