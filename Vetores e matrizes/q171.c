#include <stdio.h>
#include <stdlib.h>
const int quantidade = 5;
void main() {
  int vet1[quantidade], vet2[quantidade], k, soma = 0;
  printf("Vetor 1: \n");
  for(k=0;k<quantidade;k++){
    printf("Insira um numero: ");
    scanf("%d",&vet1[k]);
  }
  printf("Vetor 2: \n");
  for(k=0;k<quantidade;k++){
    printf("Insira um numero: ");
    scanf("%d",&vet2[k]);
  }
  for(k=0;k<quantidade;k++){
    soma += vet1[k] * vet2[k];
  }
  printf("O produto escalar dos dois vetores eh %d", soma);
}
