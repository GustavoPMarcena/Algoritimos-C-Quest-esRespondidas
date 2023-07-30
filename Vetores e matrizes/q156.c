#include <stdio.h>
const int quantidade = 10;
void main() {
  int vet[quantidade], num, k, numerod;
  for(k=0; k<quantidade; k++){
     printf("Insira um numero inteiro: ");
     scanf("%d",&vet[k]);
  }
  printf("Insira um numero inteiro de 1 a 10: ");
  scanf("%d", &numerod);
  for(k=0; k<quantidade; k++){
    if(vet[k] > numerod){
      printf("%d ",vet[k]);
    }
  } 
  //getch();
  
 }
