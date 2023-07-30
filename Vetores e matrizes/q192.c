#include <stdio.h>
#include <stdlib.h>
const int ordem = 5;
void main() {
  int mat1[ordem][ordem], mat2[ordem][ordem], k, g, num, linhasNulas = 0, soma = 0;
  printf("Preenchendo a matriz: \n");
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat1[k][g]);
    }
  }
  printf("Insira um numero inteiro n: ");
  scanf("%d", &num);
  for(k=0;k<ordem;k++){ 
    for(g=0;g<ordem;g++){
      mat2[k][g] = mat1[k][g] * num;
    }
  }
  printf("Segunda matriz: \n");
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("%d ", mat2[k][g]);
    }
    printf("\n");
  }
  //getch();
}
  
