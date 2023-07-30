#include<stdio.h>
#include<stdlib.h>

typedef struct nodo{
    int num;
    struct nodo * proximo;
}Nodo;

typedef struct {
    Nodo * topo;
}Pilha;

Pilha * criarPilha(){
    Pilha * P =(Pilha*)malloc(sizeof(Pilha));
    P->topo = NULL;
    return P;
}

void push(Pilha * P, int n){
    Nodo * novo =(Nodo*)malloc(sizeof(Nodo));
    novo->num = n;
    novo->proximo = P->topo;
    P->topo = novo;
}

int pop(Pilha * P){
    Nodo * aux = P->topo;
    int resultado = aux->num;
    P->topo = aux->proximo;
    free(aux);
    return resultado;
}

int estaVazia(Pilha * P){
    if(P->topo != NULL){
        return 1;
    }
    return 0;
}

//Q1
int somaAlgarismos(Pilha * P){
    Nodo * aux = P->topo;
    int soma = 0;
    while(aux!=NULL){
       soma += aux->num;
       aux = aux->proximo;
    }
    return soma;
}

//Q2

int aparicoes(Pilha * P, int num){
    Nodo * aux = P->topo;
    int aparicoes = 0;
    while(aux!=NULL){
       if(num == aux->num){
        aparicoes++;
       }
       aux = aux->proximo;
    }
    return aparicoes;
}

// Q3

int maiorNumero(Pilha * P){
    Nodo * aux = P->topo;
    int maiorNum = 0;
    while(aux!=NULL){
       if(maiorNum < aux->num){
          maiorNum = aux->num;
       }
       aux = aux->proximo;
    }
    return maiorNum;
}


void main(){
    Pilha * P = criarPilha();
    int n;
    printf("Informe um numero: ");
    scanf("%d",&n);
    while(n!=0){
        push(P, n);
        printf("Informe outro numero: ");
        scanf("%d",&n);
    }
    //Q1
    int soma = somaAlgarismos(P);
    printf("A soma de todos os numeros eh: %d\n\n",soma);

    //Q2
    int g;
    printf("Insira um numero n: ");
    scanf("%d",&g);
    int apa = aparicoes(P, g);
    printf("O numero %d apareceu %d vezes na pilha\n\n", g, apa);

    //Q3

    int maior = maiorNumero(P);
    printf("O maior numero da pilha eh: %d\n\n", maior);



    printf("Os numeros informados foram: ");
    while(estaVazia(P) != 0){
        n = pop(P);
        printf("%d ",n);
    }
}
