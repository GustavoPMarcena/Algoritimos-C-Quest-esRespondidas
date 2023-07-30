#include <stdio.h>

void main() {
  int contador=0, num, k, soma = 0, numAtual = 1;
  printf("Insira um numero inteiro: ");
  scanf("%d",&num);
  while(contador<num){
    for(k=1; k<numAtual;k++){
      if (numAtual%k == 0){
        soma += k;
      }
    }
    if(numAtual == soma){
      printf("%d ",numAtual);
      contador++;
    }
    soma = 0;
    numAtual++;
  }
 
  // getch();
}