#include <stdio.h>
#include <string.h>
void main() {
  int cont = 0, k;
  char palavra[50];
  while(cont < 2){
    printf("Insira uma palavra: ");
    scanf("%s", palavra);
    int letras = strlen(palavra);
    if(letras == 5){
      cont++;
    }
    printf("%s tem %d letras\n",palavra, letras);
  }
  // getch();
}