#include <stdio.h>

void main() {
  int lado1, lado2, lado3;;
  printf("Digite o valor de tres lados do triangulo: ");
  scanf("%d %d %d",&lado1, &lado2, &lado3);
  if (lado1 == lado2 && lado1 == lado3){
    printf("Esse triangulo eh equilatero ");
  } else if(lado1 != lado2 && lado1 != lado3){
    printf("Esse triangulo eh escaleno ");
  } else {
    printf("Esse triangulo eh isosceles ");
  }
  //getch();
}