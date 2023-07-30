#include <stdio.h>

void main() {
  int golsCasa, golsVisita;
  printf("Digite o numero de gols da casa e da visita: ");
  scanf("%d %d",&golsCasa, &golsVisita);
  if (golsCasa > golsVisita){
    printf("O time da casa venceu");
  } else if(golsCasa < golsVisita){
    printf("O time da visita venceu");
  } else{
    printf("O jogo empatou");
  }
  //getch();
}