#include <stdio.h>

void main() {
  int num1, num2, num3;;
  printf("Digite tres numeros: ");
  scanf("%d %d %d",&num1, &num2, &num3);
  if (num1 > num2 && num1 > num3){
    printf("O numero %d eh o maior", num1);
  } else if(num2 > num1 && num2 > num3){
    printf("O numero %d eh o maior", num2);
  } else if(num3 > num1 && num3 > num2){
    printf("O numero %d eh o maior", num3);
  } else {
    printf("Os numeros sao iguais");
  }
  //getch();
}