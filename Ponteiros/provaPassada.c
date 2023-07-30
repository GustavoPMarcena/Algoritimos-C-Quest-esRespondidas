#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char numero[10];
    char cpf[11];
    char nome[100];
    float saldo;
}Conta;

typedef struct nodo{
    struct nodo * anterior;
    Conta conta;
    struct nodo * proximo;
}Nodo;

typedef struct {
    Nodo * inicio;
}Lista;

Lista * criarLista(){
    Lista * list =(Lista*)malloc(sizeof(Lista));
    list->inicio = NULL;
    return list;
}

void push(Lista * list, char numero[10], char nome[100], char cpf[11], float saldo) {
    Nodo * novo = (Nodo*)malloc(sizeof(Nodo));
    novo->anterior = NULL;
    novo->proximo = NULL;
    strcpy(novo->conta.nome, nome);
    strcpy(novo->conta.cpf, cpf);
    strcpy(novo->conta.numero, numero);
    novo->conta.saldo = saldo;
    if(list->inicio == NULL){
        list->inicio = novo;
    } else {
        Nodo * aux = list->inicio;
        int comp = strcmp(nome, aux->conta.nome);
        while(comp > 0 && aux->proximo != NULL){
            aux = aux->proximo;
            comp = strcmp(nome, aux->conta.nome);
        }
        if(comp>0){
            aux->proximo = novo;
            novo->anterior = aux;
        } else if(list->inicio == aux){
            novo->proximo = aux;
            aux->anterior = novo;
            list->inicio = novo;
        } else{
            novo->anterior = aux->anterior;
            novo->proximo = aux;
            aux->anterior->proximo = novo;
            aux->anterior = novo;
        }
    }
}

//Q1 PROVA PASSADA
float somaSaldo(Lista * L){
    Nodo * aux = L->inicio;
    float soma = 0;
    while(aux!= NULL){
       soma += aux->conta.saldo;
       aux = aux->proximo;
    }
    return soma;
}

//Q2 PROVA PASSADA
void menorSaldo(Lista * L){
    Nodo * aux = L->inicio;
    char nomeMenor[100];
    float menorSaldo = aux->conta.saldo;
    strcpy(nomeMenor, aux->conta.nome);
    while(aux!= NULL){
       if(aux->conta.saldo < menorSaldo){
           menorSaldo = aux->conta.saldo;
           strcpy(nomeMenor, aux->conta.nome);
       }
       aux = aux->proximo;
    }
    printf("O cliente com o menor saldo eh %s com saldo de %.2f reais",nomeMenor, menorSaldo);
}

void main(){
    Lista * L = criarLista();
    push(L, "111111", "Alexandre", "11111", 1000.0);
    push(L, "111111", "Blexandre", "11111", 1.0);
    push(L, "111111", "Bruno", "11111", 20.0);
    push(L, "111111", "Dlexandre", "11111", 500.0);
    int s = somaSaldo(L);
    printf("Saldo geral das contas: %d", s);
    printf("\n\n\n");
    menorSaldo(L);
}