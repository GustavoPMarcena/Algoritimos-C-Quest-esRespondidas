#include<stdio.h>
#include<math.h>
#include<string.h>

void main(){
  char palavra[50];
  int num;
  printf("Digite uma palavra:");
  scanf("%s", palavra);
  printf("Informe o numero que voce quer analisar na sua palavra:");
  scanf("%d",& num);
  char letra = palavra[num-1];
  printf("A letra numero %d, da palavra %s, é %c \n", num, palavra, letra);
  //getch();
  
}