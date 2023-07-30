#include <stdio.h>

void main() {
  int saque;
  printf("Digite um valor a ser sacado: ");
  scanf("%d",&saque);
  if (saque > 1000){
    printf("O valor ultrapassa o limite do saque, que eh 1000 reais");
  } else{
    int cedulasCem = saque / 100;
    int cedulasCinq = (saque%100) / 50;
    int cedulasVinte = ((saque%100) % 50) / 20;
    int cedulasDez = (((saque%100) % 50) % 20) / 10;
    printf("As cedulas entregadas serao: \n%d cedulas de 100 \n%d cedulas de 50 \n%d cedulas de 20 \n%d cedulas de 10", cedulasCem, cedulasCinq, cedulasVinte, cedulasDez);
  }
  //getch();
}