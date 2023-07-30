#include <stdio.h>
#include <string.h>

void main() {
  int k, cont = 0;
  char palavra[50];
  printf("Insira uma palavra: ");
  scanf("%s",palavra);
  int numletras = strlen(palavra);
  for(k=0;k<numletras;k++){
    if(palavra[k] == palavra[numletras-k-1]){
      cont++;
    }
  }
  if(cont == numletras){
    printf("A palavra %s eh um palindromo",palavra);
  } else{
    printf("A palavra %s nao eh um palindromo",palavra);
  }
  
}
