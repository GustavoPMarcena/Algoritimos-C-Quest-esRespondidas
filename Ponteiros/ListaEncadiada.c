#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    int numero;
    char nome[100];
    char endereco[100];
} Dados;

typedef struct  nodo {
    struct nodo * anterior;
    Dados info;
    struct nodo * proximo;
} Nodo;

typedef struct {
    Nodo * topo;
} Lista;

Lista * criarLista(){
    Lista * list =(Lista*)malloc(sizeof(Lista));
    list->topo = NULL;
    return list;
}

void push(Lista * list, int num, char nome[100], char endereco[100]){
    Nodo * novo = (Nodo*)malloc(sizeof(Nodo));
    novo->anterior = NULL;
    novo->proximo = NULL;
    strcpy(novo->info.nome, nome);
    strcpy(novo->info.endereco, endereco);
    novo->info.numero = num;
    if(list->topo == NULL){
        list->topo = novo;
    } else {
        Nodo * aux = list->topo;
        int comp = strcmp(nome, aux->info.nome);
        while(comp > 0 && aux->proximo != NULL){
            aux = aux->proximo;
            comp = strcmp(nome, aux->info.nome);
        }
        if(comp>0){
            aux->proximo = novo;
            novo->anterior = aux;
        } else if(list->topo == aux){
            novo->proximo = aux;
            aux->anterior = novo;
            list->topo = novo;
        } else{
            novo->anterior = aux->anterior;
            novo->proximo = aux;
            aux->anterior->proximo = novo;
            aux->anterior = novo;
        }
    }
}




void main(){
    Lista * list = criarLista();
  
    char aaa[] = "123";
    int num2 = atoi(aaa);
    
    printf("%d", num2 + 100);
    
}

