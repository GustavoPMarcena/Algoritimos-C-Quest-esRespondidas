#include<stdio.h>
#include<string.h>

int Pontuacao(char jogos[100], int quantidadeJogos){
    if(quantidadeJogos == 1){
        if(jogos[quantidadeJogos-1] == 'V'){
            return 3;
        } else if(jogos[quantidadeJogos-1] == 'E'){
            return 1;
        }
        return 0;
    }
    if(jogos[quantidadeJogos-1] == 'V'){
        return 3 + Pontuacao(jogos, quantidadeJogos-1);
    } else if(jogos[quantidadeJogos-1] == 'E'){
        return 1 + Pontuacao(jogos, quantidadeJogos-1);
    }
    return Pontuacao(jogos, quantidadeJogos-1);
}

void main(){
    char jogos[100];
    printf("Escreva o resultado da partida: ");
    scanf("%s", &jogos);
    int pont = Pontuacao(jogos, strlen(jogos));
    printf("A pontuacao obtida eh de %d pontos",pont);
}