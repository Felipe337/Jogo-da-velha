#include <stdio.h>
#include "func.h"

int main() {
    char tabuleiro[3][3];
    char jogadorAtual = 'X';
    char vencedor = ' ';

    inicializarTabuleiro(tabuleiro);

    printf("Bem-vindo ao Jogo da Velha!\n");
    printf("Jogador 1 (X) - Jogador 2 (O)\n\n");

    while (vencedor == ' ') {
        int linha, coluna;

        exibirTabuleiro(tabuleiro);

        printf("Jogador %c, escolha sua jogada (linha e coluna): ", jogadorAtual);
        scanf("%d %d", &linha, &coluna);
        linha--;
        coluna--;

        if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ') {
            tabuleiro[linha][coluna] = jogadorAtual;
            vencedor = verificarVencedor(tabuleiro);
            if (vencedor == ' ') {
                alternarJogador(&jogadorAtual); } }
            else {
            printf("Jogada inválida! Tente novamente.\n"); } }

    exibirTabuleiro(tabuleiro);

    if (vencedor == 'E') {
        printf("O jogo terminou em empate!\n"); }
        else {
        printf("Parabéns, jogador %c! Você venceu!\n", vencedor); }
    return 0; }
