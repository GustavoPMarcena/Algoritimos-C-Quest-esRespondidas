#include <stdio.h>

void main() {
  int num1, num2, num3, maior, menor;
  printf("Digite tres numeros: ");
  scanf("%d %d %d",&num1, &num2, &num3);
  if (num1 > num2 && num1 > num3){
    maior = num1;
    if (num2 < num3){
      menor = num2;
    } else{
      menor = num3;
    }
  } else if(num2 > num1 && num2 > num3){
    maior = num2;
    if (num1 < num3){
      menor = num1;
    } else{
      menor = num3;
    }
  } else if(num3 > num1 && num3 > num2){
    maior = num3;
    if (num1 < num2){
      menor = num1;
    } else{
      menor = num2;
    }
  } else {
    printf("Os numeros sao iguais");
  }

  printf("O maior numero eh %d e o menor %d", maior, menor);
  //getch();
}