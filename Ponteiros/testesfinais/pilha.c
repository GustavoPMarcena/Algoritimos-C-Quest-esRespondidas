#include<stdio.h>
#include<stdlib.h>

typedef struct nodo{
    int num;
    struct nodo * proximo;
}Nodo;

typedef struct{
    Nodo * topo;
}Pilha;

Pilha * criarPilha(){
    Pilha * P = (Pilha*)malloc(sizeof(Pilha));
    P->topo = NULL;
    return P;
}

void push(Pilha * P, int num){
    Nodo * novo = (Nodo*)malloc(sizeof(Nodo));
    novo->num = num;
    novo->proximo = P->topo;
    P->topo = novo;
}

int pop(Pilha * P){
    Nodo * aux = P->topo;
    int num = aux->num;
    P->topo = aux->proximo;
    free(aux);
    return num;
}

int estaVazia(Pilha * P){
    if(P->topo == NULL){
        return 1;
    }
    return 0;
}

int somaR(Pilha * P){
    Nodo * aux = P->topo;
    int soma = 0;
    while(aux!=NULL){
       soma += aux->num;
       aux = aux->proximo;
    }
    return soma;
}

int repeticao(Pilha * P, int num){
    Nodo * aux = P->topo;
    int rep = 0;
    while(aux!=NULL){
       if(aux->num == num){
          rep++;
       }
       aux = aux->proximo;
    }
    return rep;
}


void main(){
    Pilha * P = criarPilha();
    int num;
    printf("Informe um numero: ");
    scanf("%d",&num);
    while(num!=0){
        push(P, num);
        printf("Informe outro numero: ");
        scanf("%d",&num);
    }

    if(estaVazia(P) != 1){
        int soma = somaR(P);
        printf("A soma dos numeros sao: %d\n\n",soma);
    }
    int numerok;
    printf("Digite um numero k: ");
    scanf("%d",&numerok);
    if(estaVazia(P) != 1){
        int rep = repeticao(P, numerok);
        printf("O numero %d se repetiu %d vezes\n\n",numerok, rep);
    }
    printf("Os numeros informados foram: ");
    while(estaVazia(P) != 1){
        int n = pop(P);
        printf("%d ",n);
    }
}