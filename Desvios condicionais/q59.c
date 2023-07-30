#include <stdio.h>

void main() {
  int num1, num2;
  printf("Digite dois numeros: ");
  scanf("%d %d",&num1, &num2);
  if(num2 > num1){
    printf("%d eh maior que %d", num2, num1);
  } else if( num2 == num1){
    printf("%d e %d sao iguais", num2, num1);
  } else{
    printf("%d eh menor que %d", num2, num1);
  }
  //getch();
}