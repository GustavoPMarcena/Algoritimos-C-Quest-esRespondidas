#include <stdio.h>

void main(){
  int k, soma = 0, n, numero;
  printf("Insira um numero n: ");
  scanf("%d",&n);
  while(soma<=n){
    printf("Insira um numero inteiro: ");
    scanf("%d",&numero);
    if(numero == n){
      continue;
    } else{
      soma += numero;
    }
  }
}