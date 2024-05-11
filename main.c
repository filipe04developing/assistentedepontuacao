#include <stdio.h>

void mostrar(int bench) {
    char resposta;
    char saida;
    if (bench >= 30000) {
        printf("\033[1;32mPontuacao show de bola! Estralou no alto desempenho. Vale muito a pena usar esse processador (Ainda mais com uma placa de video forte).\033[0m");
    } else if (bench >= 17000) {
        printf("\033[1;92mEh um processador de alto desempenho. Para aplicativos e jogos pesados ele funciona muito bem (placa de video conta muito tambem).\033[0m");
    } else if (bench >= 9000) {
        printf("\033[1;94mEh uma pontuacao boa, de medio desempenho. Eh um processador muito bom, vale a pena usar. Da para tarefas basicas, intermediarias e ate jogar alguns jogos. Para ter um bom desempenho, voce tambem precisa ter muita memoria RAM, um SSD e uma placa de video.\033[0m");
    } else if (bench >= 7000) {
        printf("\033[1;93mEh um processador de medio desempenho com pontuacao muito boa. Ele vai alem das tarefas basicas. Da para rodar programas como SketchUp, AutoCAD, CorelDraw e varios jogos com uma placa de video.\033[0m");
    } else if (bench >= 5000) {
        printf("\033[1;33mEle nao eh um processador muito forte, voce nao vai conseguir jogar qualquer jogo. Ele esta no comeCo do medio desempenho. Para tarefas do dia a dia, esse processador da e sobra. Tambem da para jogar alguns jogos nele (preferencialmente com uma placa de video para melhor desempenho) como CS:GO.\033[0m");
    } else if (bench >= 3000) {
        printf("\033[1;95mEmbora ele seja um processador de baixo desempenho, se voce usar para trabalho, estudo... \nAte para jogar alguns jogos como LOL, Roblox e CS:GO da para usar tranquilamente.\033[0m");
    } else if (bench >= 1500) {
        printf("\033[1;31mPara estudar, trabalhar e jogar jogos mais simples voce tem um otimo processador.\033[0m");
    } else if (bench >= 1000) {
        printf("\033[0;31mIndicado para tarefas basicas.\033[0m");
    } else if (bench >= 800) {
        printf("\033[1;38mEsta no limite da pontuacao utilizável. So eh util para acessar a internet e algumas tarefas corriqueiras.\033[0m");
    } else {
        printf("\033[1;31mNao compensa usar esse processador.\033[0m");
    }

    printf("\n");
    printf("Digite qualquer coisa pra sair: ");
    scanf("%s",&saida);
}

int main() {
    int bench;
    char resposta;
    printf("Bem-vindo ao interpretador de pontuacao do PassMark (CPU Benchmark) \n");
    printf("O compilador do programa so le caracteres no padrao UTF-8 (sem acentos). \n");
    printf("Digite a pontuacao do processador: ");
    scanf("%d", &bench);
    mostrar(bench);

    return 0;
}
