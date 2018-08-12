#include <stdio.h>
#include <stdlib.h>

struct s_pos{
    int x;
    int y;
};

struct s_circulo{
    struct s_pos c; //centro do circulio
    float r; //seu raio
};

int main(){
    struct s_circulo *p; //o ponteiro para espaço alocado
     p = (struct s_circulo*) malloc(sizeof(struct s_circulo)); // aloca espaço para struct s_circulo
jkb
     if(!p){ //vejo se conseguiu alocar
        printf("não consegui alocar memória");
        exit(1);
     }
      p->c.x = 12;
      p->c.y = 3;
      p->r = 3.2; //carrego um valor na regiao da memoriua alocada

      //escrevo a estrutura
      printf("x = %d\n",p->c.x);
      printf("y = %d\n",p->c.y);
      printf("r = %d\n",p->r);

      free(p); //libera espaco na memoria de p

}


