#include <stdio.h>
#include <stdlib.h>
const int ordem = 5;
void main() {
  int mat[ordem][ordem], k, g, num, numerosPrimos = 0, divisores = 0;
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat[k][g]);
    }
  }
  printf("Insira um numero n: ");
  scanf("%d", &num);
  for(k=0;k<ordem;k++){ 
    for(g=1;g<=mat[k][num-1]; g++){
      if(mat[k][num-1] % g == 0){
        divisores++;
      }
    }
    if(divisores == 2){
      numerosPrimos++;
    }
    divisores = 0;
  }
  printf("A quantidade de numeros pares na coluna %d eh %d",num,numerosPrimos);
}