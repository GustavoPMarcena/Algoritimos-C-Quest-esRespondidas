#include <stdio.h>

void main() {
  int num1, num2, num3, mid;
  printf("Digite tres numeros: ");
  scanf("%d %d %d",&num1, &num2, &num3);
  if (num1 > num2 && num1 > num3){
    if (num2 > num3){
      mid = num2;
    } else{
      mid = num3;
    }
  } else if(num2 > num1 && num2 > num3){
    if (num1 > num3){
      mid = num1;
    } else{
      mid = num3;
    }
  } else if(num3 > num1 && num3 > num2){
    if (num1 > num2){
      mid = num1;
    } else{
      mid = num2;
    }
  } else {
    printf("Os numeros sao iguais");
  }

  printf("O numero do meio eh %d", mid);
  //getch();
}