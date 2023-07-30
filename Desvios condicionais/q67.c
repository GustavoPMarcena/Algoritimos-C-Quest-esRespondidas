#include <stdio.h>

void main() {
  int ano;
  printf("Digite um ano: ");
  scanf("%d",&ano);
  int resto = ano % 400;
  int div4 = ano % 4;
  int div100 = ano % 100;
  if (resto == 0 || (div4 == 0 && div100 != 0)){
    printf("O ano %d eh bissexto", ano);
  } else{
    printf("O ano %d nao eh bissexto", ano);
  }
  //getch();
}