#include <stdio.h>

const int quantidade = 5;

void main() {
    int vet1[quantidade], vet2[quantidade], vet3[quantidade*2], num, k, i, j;
    printf("Primeiro Vetor:\n");
    for (k = 0; k < quantidade; k++) {
        printf("Insira um número inteiro: ");
        scanf("%d", &vet1[k]);
    }
    printf("Segundo Vetor:\n");
    for (k = 0; k < quantidade; k++) {
        printf("Insira um número inteiro: ");
        scanf("%d", &vet2[k]);
    }
    // Verificar os valores iguais e guardar no vetor 3
    int cont = 0;
    for (i = 0; i < quantidade; i++) {
        for (j = 0; j < quantidade; j++) {
            if (vet1[i] == vet2[j]) {
                vet3[cont] = vet1[i];
                cont++;
            }
        }
    } 
  //Remover os repetidos
    for(i=0; i<cont; i++){
      for(j=i; j<cont;j++){
        if(i == j){
          continue;
        } else if( vet3[j] == vet3[i] ){
          for( k = j; k < cont; k++ ){
            vet3[k] = vet3[k + 1];
            i--;
          }
          cont--;
        }    
      }
    }
    printf("Terceiro Vetor:\n");
    for (k = 0; k < cont; k++) {
        printf("%d ", vet3[k]);
    }
  //getch();
}
