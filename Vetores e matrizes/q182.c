#include <stdio.h>
#include <stdlib.h>
const int ordem = 5;
void main() {
  int mat[ordem][ordem], k, g, num, maiorValor = 0;
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat[k][g]);
    }
  }
  for(k=0;k<ordem;k++){
    if(maiorValor < mat[k][k]){
       maiorValor = mat[k][k];
    }
  }
  printf("O maior valor da matriz eh %d",maiorValor);
}