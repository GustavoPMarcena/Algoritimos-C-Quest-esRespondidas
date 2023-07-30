#include <stdio.h>
#include <stdlib.h>
const int ordem = 5;
void main() {
  int mat1[ordem][ordem],mat2[ordem][ordem], k, g, num, linhasIguais = 0, numeroLinhas = 0, colunasIguais = 0, numeroColunas = 0;
  printf("Preenchendo o primeiro vetor: \n");
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat1[k][g]);
    }
  }
  printf("Preenchendo o segundo vetor: \n");
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat2[k][g]);
    }
  }
  for(k=0;k<ordem;k++){ 
    for(g=0;g<ordem;g++){
      if(mat1[k][g] == mat2[k][g]){
        numeroLinhas++;
      }
    }
    for(g=0;g<ordem;g++){
      if(mat1[g][k] == mat2[g][k]){
        numeroColunas++;
      }
    }
    if(numeroLinhas == ordem){
      linhasIguais++;
    }
    if(numeroColunas == ordem){
      colunasIguais++;
    }
    numeroLinhas = 0;
    numeroColunas = 0;
  }
  
  printf("Colunas iguais: %d\nLinhas iguais: %d",colunasIguais, linhasIguais);
  //getch();
}