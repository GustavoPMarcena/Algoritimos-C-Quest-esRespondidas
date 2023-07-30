#include <stdio.h>
#include <stdlib.h>
const int ordem = 5;
void main() {
  int mat[ordem][ordem], k, g, num, linhasNulas = 0, somaLinhas = 0, colunasNulas = 0, somaColunas = 0;
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat[k][g]);
    }
  }
  for(k=0;k<ordem;k++){ 
    for(g=0;g<ordem;g++){
      somaLinhas+=mat[k][g];
    }
    for(g=0;g<ordem;g++){
      somaColunas+=mat[g][k];
    }
    if(somaLinhas == 0){
      linhasNulas++;
    }
    if(somaColunas == 0){
      colunasNulas++;
    }
    somaLinhas = 0;
    somaColunas = 0;
  }
  int determinante = linhasNulas + colunasNulas;
  printf("O numero que representa a soma entre colunas e linhas nulas eh %d",determinante);
  //getch();
}
  