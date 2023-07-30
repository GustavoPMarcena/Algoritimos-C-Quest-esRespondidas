#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const int quantidade = 10;

void main() {
  int k, acertos = 0, quantidadeAlunos = 0, percentualAcertos = 0;
  char vet[quantidade], gabarito[quantidade], nome[50];
 
  for(k=0;k<quantidade;k++){
    printf("Insira a %d alternativa : ",k+1);
    scanf("%s", &gabarito[k]);
  }
  printf("Insira o nome do aluno: ");
  scanf("%s", nome);
  do{
    for(k=0;k<quantidade;k++){
      printf("Insira a %d alternativa do aluno: ",k+1);
      scanf("%s", &vet[k]);
      if(vet[k] == gabarito[k]){
        acertos++;
      }
    }
    int media = (100*acertos)/quantidade;
    printf("O aluno %s acertou %d questoes, com media %d \n\n", nome, acertos, media);
    quantidadeAlunos++;
    percentualAcertos+=acertos;
    acertos=0;
   
    printf("Insira o nome do aluno: ");
    scanf("%s", nome);
    
  }while(strcmp(nome, "fim") != 0);

  printf("O percentual de acertos da turma eh %d",percentualAcertos/quantidadeAlunos);
  
//getch();
}
