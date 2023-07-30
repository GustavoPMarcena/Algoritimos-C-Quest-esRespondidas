#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int quantidade = 10;
void main() {
  int vet[quantidade], num, k, g, cont = 0, numeroSequencias = 0, soma = 0;
  printf("Preenchendo o vetor: \n");
  for(k=0;k<quantidade;k++){
    printf("Insira um numero inteiro: ");
    scanf("%d",&vet[k]);
  }
  for(k=0;k<quantidade;k++){
    soma += vet[k] * vet[k];
  }
  float modulo = sqrt(soma);
  printf("O modulo dos numeros eh: %.2f",modulo);
  //getch();
}
  