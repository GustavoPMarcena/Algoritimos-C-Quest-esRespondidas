#include<stdio.h>
#include<stdlib.h>

typedef struct nodo{
    int num;
    struct nodo * proximo;
}Nodo;

typedef struct {
    Nodo * inicio;
}Fila;

Fila * criarFila(){
    Fila * F = (Fila*)malloc(sizeof(Fila));
    F->inicio = NULL;
    return F;
}

void inserir(Fila * F, int num){
    Nodo * novo = (Nodo*)malloc(sizeof(Nodo));
    novo->num = num;
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
    int num = aux->num;
    F->inicio = aux->proximo;
    free(aux);
    return num;
}

int estaVazia(Fila * F){
    if(F->inicio == NULL){
        return 1;
    }
    return 0;
}

void main(){
    Fila * F = criarFila();
    int num;
    printf("Informe um numero: ");
    scanf("%d",&num);
    while(num!=0){
        inserir(F, num);
        printf("Informe outro numero: ");
        scanf("%d",&num);
    }

 
    printf("Os numeros informados foram: ");
    while(estaVazia(F) != 1){
        int n = remover(F);
        printf("%d ",n);
    }
}