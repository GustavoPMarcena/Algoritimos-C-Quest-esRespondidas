#include <stdio.h>
const int quantidade = 10;
void main() {
  int vet[quantidade], num, k, m,n;
  for(k=0; k<quantidade; k++){
     printf("Insira um numero inteiro: ");
     scanf("%d",&num);
     vet[k] = num;  
  }
  for(k=0; k<quantidade; k++){
    printf("%d ",vet[k]);
  }
  printf("\n");
  
  for(k=0; k<quantidade/2; k++){
    int aux = vet[k];
    vet[k] = vet[9-k];
    vet[9-k] = aux;
  }
  for(k=0; k<quantidade; k++){
    printf("%d ",vet[k]);
  }
 
  //getch();
  
 }
