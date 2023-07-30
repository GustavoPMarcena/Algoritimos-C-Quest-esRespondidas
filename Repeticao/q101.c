#include <stdio.h>

void main() {
  int contador=0, k, num;
  printf("Insira um numero inteiro: ");
  scanf("%d",&num);
  for(k=0; contador<num; k++){
    if(k%2 != 0){
      printf("%d ",k);
      contador++;
    }
  }
  // getch();
}