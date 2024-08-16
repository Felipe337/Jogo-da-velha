#include <stdio.h>


void inicializarTabuleiro(char tabuleiro[3][3]);
void exibirTabuleiro(char tabuleiro[3][3]);
char verificarVencedor(char tabuleiro[3][3]);
void alternarJogador(char *jogadorAtual);



void inicializarTabuleiro(char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' '; } } }

void exibirTabuleiro(char tabuleiro[3][3]) {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", tabuleiro[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n"); } }

char verificarVencedor(char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ') {
            return tabuleiro[i][0]; } }

    for (int i = 0; i < 3; i++) {
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ') {
            return tabuleiro[0][i]; } }
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ') {
        return tabuleiro[0][0]; }
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ') {
        return tabuleiro[0][2]; }

    int empate = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') {
                empate = 0; } } }

    if (empate) {
        return 'E'; }
    return ' '; }

void alternarJogador(char *jogadorAtual) {
    if (*jogadorAtual == 'X') {
        *jogadorAtual = 'O'; }
        else { *jogadorAtual = 'X'; } }

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
