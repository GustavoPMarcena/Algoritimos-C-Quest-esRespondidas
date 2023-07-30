#include<stdio.h>
const int tamanho = 10;

int vetorSemelhante(int vet1[tamanho],int vet2[tamanho], int pos){
    if(pos > tamanho){
        return 1;
    }
    if(vet1[pos-1] != vet2[pos-1]){
        return 0;
    }
    return vetorSemelhante(vet1, vet2, pos+1);
    
}

void main(){
    int k, vet1[tamanho],vet2[tamanho], pos;
    printf("Preenchendo o primeiro vetor: \n");
    for(k=0; k<tamanho; k++){
        printf("Insira um numero: ");
        scanf("%d",&vet1[k]);
    }
    printf("Preenchendo o segundo vetor: \n");
    for(k=0; k<tamanho; k++){
        printf("Insira um numero: ");
        scanf("%d",&vet2[k]);
    }   
    printf("Insira uma posicao: ");
    scanf("%d",&pos);
    int semelhantes = vetorSemelhante(vet1, vet2, pos);
    if(semelhantes){
        printf("Os vetores sao semelhantes a partir de %d",pos);
    } else{
        printf("Os vetores nao sao semelhantes a partir de %d",pos);
    }
}