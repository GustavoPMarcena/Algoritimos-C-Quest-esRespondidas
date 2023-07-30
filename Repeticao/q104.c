#include <stdio.h>

void main() {
  int contador=0, k, num, soma = 0;
  printf("Insira um numero inteiro: ");
  scanf("%d",&num);
  for(k=1; k<num;k++){
    if (num%k == 0){
      soma += k;
    }
  }
  if(num == soma){
    printf("O numero %d eh perfeito", num);
  } else{
    printf("O numero %d nao eh perfeito", num);
  }
  // getch();
}