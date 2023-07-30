#include<stdio.h>
#include<stdlib.h>

typedef struct nodo{
    int num;
    struct nodo * proximo;
}Nodo;

typedef struct{
    Nodo * inicio;
}Fila;

Fila * criarFila(){
    Fila * F =(Fila*)malloc(sizeof(Fila));
    F->inicio = NULL;
    return F;
}

void inserir(Fila * F, int n){
    Nodo * novo =(Nodo*)malloc(sizeof(Nodo));
    novo->num = n;
    novo->proximo = NULL;
    if(F->inicio == NULL){
        F->inicio = novo;
    } else{
        Nodo * aux = F->inicio;
        while(aux->proximo != NULL){
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
}

int remover(Fila * F){
    Nodo * aux = F->inicio;
    int resultado = aux->num;
    F->inicio = aux->proximo;
    free(aux);
    return resultado;
}

int estaVazia(Fila * F){
    if(F->inicio != NULL){
        return 1;
    }
    return 0;
}

void main(){
    int n;
    Fila * F = criarFila();
    printf("Informe um numero: ");
    scanf("%d",&n);
    while(n!=0){
        inserir(F, n);
        printf("Informe outro numero: ");
        scanf("%d",&n);
    }
    printf("Os numeros informados foram: ");
    while(estaVazia(F) != 0){
        n = remover(F);
        printf("%d ",n);
    }

}