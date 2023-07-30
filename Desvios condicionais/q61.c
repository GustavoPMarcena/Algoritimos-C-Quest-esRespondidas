#include <stdio.h>

void main() {
  int num;
  printf("Digite um numero: ");
  scanf("%d",&num);
  if (num >= 0){
    printf("O valor absoluto do numero %d eh |%d|, já que ele é positivo", num, num);
  } else{
    int valorAbs = num * -1;
    printf("O valor absoluto de %d eh |%d|", num, valorAbs);
  }
  //getch();
}