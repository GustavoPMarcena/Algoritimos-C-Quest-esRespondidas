#include <stdio.h>
#include <stdlib.h>
const int ordem = 4;
void main() {
  int mat[ordem][ordem], k, g;
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat[k][g]);
    }
  }
  printf("Matriz completa: \n");
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("%d ", mat[k][g]);
    }
    printf("\n");
  }
}