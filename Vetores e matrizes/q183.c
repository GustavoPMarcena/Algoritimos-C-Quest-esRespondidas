#include <stdio.h>
#include <stdlib.h>
const int ordem = 5;
void main() {
  int mat[ordem][ordem], k, g, num, soma = 0;
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat[k][g]);
    }
  }
  printf("Insira um numero inteiro entre 1 e 5: ");
  scanf("%d",&num);
  for(k=0;k<ordem;k++){ 
    soma += mat[num-1][k];
  }
  printf("A soma dos elementos da linha %d eh %d",num, soma);
}