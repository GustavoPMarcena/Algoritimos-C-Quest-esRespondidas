#include <stdio.h>
const int quantidade = 10;
void main() {
  int vet[quantidade], num, k;
  for(k=0; k<quantidade; k++){
     printf("Insira um numero inteiro: ");
     scanf("%d",&num);
     vet[k] = num;
  }
  for(k=quantidade-1; k>=0; k--){
    printf("%d ",vet[k]);
  }
  
  //getch();
  
 }
