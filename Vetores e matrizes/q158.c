#include <stdio.h>
const int quantidade = 10;
void main() {
  int vet[quantidade], k, numerod, soma = 0;
  for(k=0; k<quantidade; k++){
     printf("Insira um numero inteiro: ");
     scanf("%d",&vet[k]);
     soma += vet[k];
    
  }
  int media = soma/quantidade;
  printf("Os numeros que sao maiores que a media %d dos numeros sao: ", media);

  for(k=0; k<quantidade; k++){
    if(vet[k] > media){
      printf("%d ",vet[k]);
    }
  }
  //getch();
  
 }