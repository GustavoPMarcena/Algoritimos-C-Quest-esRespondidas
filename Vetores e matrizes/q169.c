#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
const int quantidade = 2000;

void main() {
    int aparicoes[26], k=0, g=0,i;
    char texto[quantidade];
    printf("Insira um texto qualquer: ");
    fgets(texto, quantidade, stdin);
    for(k=0;k<26;k++){
      aparicoes[k] = 0;
    }
    for(k=0;k<=strlen(texto); k++){
      for(i=0;i<26;i++){
        if(toupper(texto[k]) == 'A'+ i){
           aparicoes[i]++;
        }
      }
    }
    for(k=0;k<26;k++){
      if(aparicoes[k] != 0){
        printf("%c: %d \n",'A'+ k, aparicoes[k]);
      }
      
    }
     
}