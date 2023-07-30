#include <stdio.h>
const int quantidade = 10;
void main() {
  int vet[quantidade], num, k, numerod;
  for(k=0; k<quantidade; k++){
     printf("Insira um numero inteiro: ");
     scanf("%d",&num);
     vet[k] = num;
  }
  printf("Insira outro numero inteiro: ");
  scanf("%d", &numerod);
  printf("O numero %d aparece nas seguintes posicoes: ", numerod);
  for(k=0; k<quantidade; k++){
    if(vet[k] == numerod){
      printf("%d ",k+1);
    }
  }
  
  
  //getch();
  
 }
