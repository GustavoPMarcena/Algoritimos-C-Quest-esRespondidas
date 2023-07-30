#include <stdio.h>
#include <stdlib.h>
const int ordem = 5;
void main() {
  int mat[ordem][ordem], k, g, num, linhasNulas = 0, soma = 0;
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat[k][g]);
    }
  }
  for(k=0;k<ordem;k++){ 
    for(g=0;g<ordem;g++){
      soma+=mat[k][g];
    }
    if(soma == 0){
      linhasNulas++;
    }
    soma = 0;
  }
    printf("Existem %d linhas nulas nessa matriz",linhasNulas);
  //getch();
}
  