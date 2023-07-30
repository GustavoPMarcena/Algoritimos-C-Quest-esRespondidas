#include <stdio.h>

void main() {
  int alcool, gasolina;
  printf("Digite o valor da gasolina e do alcool: ");
  scanf("%d %d",&gasolina, &alcool);
  int valgas = gasolina * 0.7;
  if (valgas <= alcool){
    printf("Abasteca com gasolina");
  } else{
    printf("Abasteca com alcool");
  }
  //getch();
}