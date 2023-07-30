#include <stdio.h>
#include <stdlib.h>
const int ordem = 4;
void main() {
  int mat[ordem][ordem], k, g, num, aparicoes = 0;
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat[k][g]);
    }
  }
  printf("Insira um numero inteiro n: ");
  scanf("%d",&num);
  for(k=0;k<ordem;k++){ 
    for(g=0;g<ordem;g++){
      if(num == mat[k][g]){
        aparicoes++;
      }
    }
  }
  printf("O numero %d apareceu %d vezes",num,aparicoes);
}