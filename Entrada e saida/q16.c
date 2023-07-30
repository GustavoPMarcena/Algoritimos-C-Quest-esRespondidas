#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

void main(){
  char letra[10];
  printf("Digite uma letra minuscula:");
  scanf("%c", letra);
  printf("A letra %s é representado em maiuscula como %c \n", letra, toupper(letra[0]));
  //getch();
  
}