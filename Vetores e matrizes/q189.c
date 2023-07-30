#include <stdio.h>
#include <stdlib.h>
const int ordem = 5;
void main() {
  int mat[ordem][ordem], k, g, num, soma=0;
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat[k][g]);
    }
  }
  printf("Insira um numero n: ");
  scanf("%d", &num);
  for(k=0;k<ordem;k++){ 
    soma += mat[k][num-1];
  }
  if (soma == 0){
    printf("A coluna %d eh nula",num);
  } else{
    printf("A coluna %d nao eh nula",num);
  }
  
}