#include <stdio.h>
const int quantidade = 5;
void main() {
   int vet1[quantidade], vet2[quantidade], vet3[quantidade*2], k,g,i,j, cont = 0;
   printf("Primeiro Vetor: \n");
   for(k=0;k<quantidade;k++){
     printf("Insira um numero inteiro: ");
     scanf("%d",&vet1[k]);
   }
   printf("Segundo Vetor: \n");
   for(k=0;k<quantidade;k++){
     printf("Insira um numero inteiro: ");
     scanf("%d",&vet2[k]);
   }
  //Colocando os valores no vetor
  int a = quantidade;
  for(k=0;k<quantidade;k++){
      vet3[k] = vet1[k];
      vet3[a] = vet2[k];
      a++;
      cont+=2;
  }
  //Removendo os valores repetidos
    for(i=0; i<cont; i++){
      for(j=0; j<cont;j++){
        if(i == j){
          continue;
        } else if(vet3[i] == vet3[j]){
          for( k = j; k < cont; k++ ){
            vet3[k] = vet3[k + 1];
          } 
          i--;
          cont--;
        }    
      }
    }
   printf("Terceiro Vetor apenas com valores diferentes: \n");
   for(k=0;k<cont;k++){
     printf("%d ", vet3[k]);
   } 
}

