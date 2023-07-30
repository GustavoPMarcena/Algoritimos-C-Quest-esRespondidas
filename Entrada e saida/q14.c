#include<stdio.h>
#include<math.h>
#include<string.h>
void main(){
  char palavra[50];
  printf("Digite uma palavra para ver seu comprimento: \n");
  scanf("%s", palavra);
  int contagem = strlen(palavra);
  printf("A palavra %s, tem %d letras\n", palavra, contagem);
  //getch();
  
}