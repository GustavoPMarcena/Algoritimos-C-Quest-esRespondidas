#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
    Lista * L = (Lista*)malloc(sizeof(Lista));
    L ->inicio = NULL;
    return L;
}

void inserir(Lista * L, char numero[11], char cpf[11], char nome[100], float saldo){
    Nodo * novo = (Nodo*)malloc(sizeof(Nodo));
    novo->anterior = NULL;
    strcpy(novo->conta.nome, nome);
    strcpy(novo->conta.cpf, cpf);
    strcpy(novo->conta.numero, numero);
    novo->conta.saldo = saldo;
    novo->proximo = NULL;
    if(L->inicio == NULL){
        L->inicio = novo;
    } else{
        Nodo * aux = L->inicio;
        int comp = strcmp(nome, aux->conta.nome);
        while(comp>0 && aux->proximo != NULL){
            aux = aux->proximo;
            comp = strcmp(nome, aux->conta.nome);
        }
        if(comp > 0){
            aux->proximo = novo;
            novo->anterior = aux;
        } else if(L->inicio == aux){
            novo->proximo = aux;
            aux->anterior = novo;
            L->inicio = novo;
        }else{
            novo->proximo = aux;
            novo->anterior = aux->anterior;
            aux->anterior->proximo = novo;
            aux->anterior = novo;
        }
    }
}

Nodo * localizarContato(Lista * L, char nome[100]){
    if(L->inicio == NULL){
        return NULL;
    } 
    Nodo * aux = L->inicio;
    int comp = strcmp(nome, aux->conta.nome);
    while(comp>0 && aux->proximo != NULL){
        aux = aux->proximo;
        comp = strcmp(nome, aux->conta.nome);
    }
    if(comp==0){
        return aux;
    } else{
        return NULL;
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
    inserir(L, "111111", "11111", "Alexandre", 1000.0);
    inserir(L, "111111",  "11111","Blexandre", 1.0);
    inserir(L, "111111",  "11111", "Bruno",20.0);
    inserir(L, "111111",  "11111","Dlexandre", 500.0);
    int s = somaSaldo(L);
    printf("Saldo geral das contas: %d", s);
    printf("\n\n\n");
    menorSaldo(L);
    Nodo * contato = localizarContato(L, "Bruno");
    if(contato != NULL){
       printf("contato aa: %s,%.2f ",contato->conta.nome, contato->conta.saldo);
    }else{
        printf("Contato nao encontrado!");
    }
    
}