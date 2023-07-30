#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const int quantidade = 4;
void main() {
  int cont, k, condicao = 1;
  float peso, pesoBoiMaior = 0, pesoBoiMenor = 0;
  char nome[50], nomeboiMaior[50], nomeboiMenor[50];
  for(k=1; k<=quantidade ;k++){
    printf("Insira o nome do boi: ");
    scanf("%s", nome);
    printf("Insira o peso do boi: ");
    scanf("%f",&peso);
    fflush(stdin);
    if(condicao == 1){
      pesoBoiMenor = peso;
      condicao = 0;
    }
    if(peso > pesoBoiMaior){
      pesoBoiMaior = peso;
      strcpy(nomeboiMaior,nome);
    } 
    if (peso < pesoBoiMenor){
      pesoBoiMenor = peso;
      strcpy(nomeboiMenor,nome);
    }
  }
  printf("Maior peso: %s\nMenor peso: %s",nomeboiMaior, nomeboiMenor);
  // getch();
}