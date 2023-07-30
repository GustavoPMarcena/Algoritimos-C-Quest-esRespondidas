#include <stdio.h>
#include <stdlib.h>
const int ordem = 5;
void main() {
  int mat[ordem][ordem], k, g, num;
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat[k][g]);
    }
  }
  printf("Insira um numero inteiro n: ");
  scanf("%d",&num);
  printf("\n\nOs %d elementos da diagonal sao: ",num);
  for(k=0;k<num;k++){ 
     printf("%d ",mat[k][k]); 
  }
}