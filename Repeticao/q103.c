#include <stdio.h>

void main() {
  int contador=0, k, num;
  printf("Insira um numero inteiro: ");
  scanf("%d",&num);
  for(k=1; k<=num;k++){
    if (num%k == 0){
      contador++;
    }
  }
  if(contador == 2){
    printf("O numero %d eh primo",num);
  } else{
    printf("O numero %d nao eh primo",num);
  }
  // getch();
}