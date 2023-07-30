#include <stdio.h>

void main(){
  int k, num, cont = 1, decisao;
  float preco, soma = 0;
  char nome[50];
  while(cont == 1){
    printf("Insira o nome do produto: ");
    scanf("%s",nome);
    printf("Insira o preco do produto: ");
    scanf("%f", &preco);
    soma += preco;
    printf("Deseja encerrar a conta?(1 - encerrar , 2 - continuar): ");
    scanf("%d", &decisao);
    if(decisao == 1){
      cont = 0;
    }
  }
  float contaVista = soma - (soma * 15/100);
  printf("Conta a Vista: %f\nConta a prazo: %f",contaVista, soma);
}