#include <stdio.h>
#include <stdlib.h>
const int ordem = 5;
void main() {
  int mat[ordem][ordem], k, g, num, maiorElemento = 0;
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat[k][g]);
    }
  }
  printf("Insira um numero n: ");
  scanf("%d", &num);
  for(k=0;k<ordem;k++){ 
    if(mat[num-1][k] > maiorElemento){
      maiorElemento = mat[num-1][k];
    }
  }
  printf("O maior numero da linha %d eh %d",num,maiorElemento);
}