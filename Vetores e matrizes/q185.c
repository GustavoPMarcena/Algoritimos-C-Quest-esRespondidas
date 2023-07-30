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
  for(k=0;k<ordem;k++){ 
    for(g=0;g<ordem;g++){
      soma += mat[k][g];
    }
    printf("Soma da linha %d: %d\n",k+1,soma);
    soma = 0;
  }
  
}