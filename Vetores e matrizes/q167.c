#include <stdio.h>
const int quantidade = 10;
void main() {
    int vet[quantidade], num, k,g;
    for(k=0;k<quantidade;k++){
      printf("Insira um numero inteiro: ");
      scanf("%d",&vet[k]);
    }
    for(k=0;k<quantidade;k++){
      for(g=0;g<quantidade;g++){
         if(vet[k] < vet[g]){
           int aux = vet[k];
           vet[k] = vet[g];
           vet[g] = aux;
           g=0;
         }
      }
    }
  printf("O vetor em formato crescente: \n");
    for(k=0;k<quantidade;k++){
      printf("%d ",vet[k]);
    }
    
  //getch();
}