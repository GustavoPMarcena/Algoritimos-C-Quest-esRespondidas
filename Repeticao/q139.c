#include <stdio.h>
#include <math.h>
int main() {
  int num, k, contagem = 1, cont = 0, algarismo, condicao = 0;
  printf("Insira um numero inteiro n e k: ");
  scanf("%d %d",&num, &k);
  cont = num;
  while(cont>0){
    algarismo = (cont%10);
    if(contagem == k){
      printf("O %d algarismo do numero %d eh %d",k,num,algarismo);
      condicao = 1;
    }
    cont /= 10;
    contagem++;
  }
  if(condicao == 0){
    printf("0, o numero nao tem %d algarismos",k);
  }

// getch();
}