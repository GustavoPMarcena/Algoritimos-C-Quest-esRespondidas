#include <stdio.h>
#include <stdlib.h>
const int ordem = 3;
void main() {
  int mat1[ordem][ordem],mat2[ordem][ordem], k, g, num ;
  printf("Preenchendo a primeira matriz: \n");
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat1[k][g]);
    }
  }
  printf("Preenchendo a segunda matriz: \n");
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("Insira um numero [%d][%d]: ",k,g);
      scanf("%d", &mat2[k][g]);
    }
  }
  printf("Os numeros que aparecem na matriz são: \n");
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
      printf("%d ",mat1[k][g]);
    }
  }
  int m,n, condicao = 0;
  for(k=0;k<ordem;k++){
    for(g=0;g<ordem;g++){
        for(m=0;m<ordem;m++){
          for(n=0;n<ordem;n++){
              if(mat2[k][g] == mat1[m][n]){
                condicao = 1;
              }
          }
        }
      if(condicao != 1){
        printf("%d ",mat2[k][g]);
      }
      condicao = 0;
    }
  }
 
  //getch();
}