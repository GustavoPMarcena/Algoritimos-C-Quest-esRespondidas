#include <stdio.h>

void main() {
  float salario, valorEntrada;
  printf("Digite o salario de joao e o valor da entrada: ");
  scanf("%f %f",&salario, &valorEntrada);

  int poupanca = salario * 25/100;
  int tempo = valorEntrada / poupanca;
  int anos = tempo / 12;
  int meses = tempo % 12;

  printf("Joao vai conseguir dar entrada em %d anos e %d meses", anos, meses);
  //getch();
}