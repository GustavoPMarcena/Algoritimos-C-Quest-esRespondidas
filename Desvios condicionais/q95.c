#include <stdio.h>

void main() {
  float num1, num2, num3, num4;
  printf("Digite quatro numeros reais: ");
  scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
  int pA = num2 - num1;
  float pG = num2 / num1;
  if (num1+pA == num2 && num2 + pA == num3 && num3 + pA == num4){
    if(num1*pG == num2 && num2*pG == num3 && num3 * pG == num4){
      printf("A sequencia %.0f-%.0f-%.0f-%.0f eh uma progressao aritmetica e geometrica", num1, num2, num3, num4);
    }
    else{
      printf("A sequencia %.0f-%.0f-%.0f-%.0f eh apenas uma progressao aritmetica", num1, num2, num3, num4);
    }
  } else if(num1*pG == num2 && num2*pG == num3 && num3 * pG == num4){
    printf("A sequencia %.0f-%.0f-%.0f-%.0f eh apenas uma progressao geometrica", num1, num2, num3, num4);
  } else{
   printf("A sequencia %.0f-%.0f-%.0f-%.0f nao representa uma progressao", num1, num2, num3, num4);
  }
  //getch();
}