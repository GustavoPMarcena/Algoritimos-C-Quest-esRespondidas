#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  int k, quantidade, numBilhete;
  char nome[50], nomeVencedor[50];
  printf("Quantas pessoas irão participar do evento: ");
  scanf("%d",&quantidade);
  for(k=1;k<=quantidade; k++){
    fflush(stdin);
    printf("Informe o nome do participante: ");
    scanf("%s", nome);
    printf("Informe o numero do bilhete do participante: ");
    scanf("%d",&numBilhete);
    if(k == numBilhete){
      strcpy(nomeVencedor, nome);
    }
  }
  printf("O vencedor do sorteio eh %s",nomeVencedor);
  // getch();
}