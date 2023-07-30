#include <stdio.h>

void main() {
  int num;
  printf("Digite um numero de 1000 a 9999: ");
  scanf("%d",&num);
  int milhar = num / 1000;
  int centena = (num / 100) - milhar*10;
  int dezena = ((num % 1000) / 10) - centena * 10;
  int unidade = num % 10;
  int palindromo = (unidade * 1000) + (dezena * 100) + (centena * 10) + unidade;
  if (num == palindromo){
    printf("O numero %d eh palindromo", num);
  } else{
    printf("O numero %d nao eh palindromo", num);
  }
  //getch();
}