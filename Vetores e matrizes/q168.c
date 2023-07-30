#include <stdio.h>
const int quantidade = 5;
void main() {
    int vet1[quantidade], vet2[quantidade],vet3[quantidade*2], num, k,g;
    printf("Vetor1: \n");
    for(k=0;k<quantidade;k++){
      printf("Insira um numero inteiro: ");
      scanf("%d",&vet1[k]);
    }
    printf("Vetor2: \n");
    for(k=0;k<quantidade;k++){
      printf("Insira um numero inteiro: ");
      scanf("%d",&vet2[k]);
    }
    //Inserindo os valores no vetor 3
    for(k=0;k<quantidade;k++){
      vet3[k] = vet1[k];
      vet3[k+quantidade] = vet2[k];
    }
    // Ordenando os valores 
    int tam = quantidade*2;
    for(k=0;k<tam;k++){
      for(g=0;g<tam;g++){
         if(vet3[k] < vet3[g]){
           int aux = vet3[k];
           vet3[k] = vet3[g];
           vet3[g] = aux;
           g=0;
         }
      }
    }
  printf("O vetor em formato crescente: \n");
    for(k=0;k<tam;k++){
      printf("%d ",vet3[k]);
    }
    
  //getch();
}
