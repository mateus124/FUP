#include <stdio.h>

int main() {
    int dimensao, x, y, segundos;
    char direcao;
    scanf("%d %d %d %c %d", &dimensao, &x, &y, &direcao, &segundos);

    //Adicionando a quantidade de quadros movimentados pela cobra a respectiva direção
    if (direcao = 'U') {
        y -= segundos;
    } else if (direcao = 'D') {
        y += segundos;
    } else if (direcao = 'L') {
        x -= segundos;
    } else {
        x += segundos;
    }

    //Verificando se X ou Y está fora da dimensão do plano
    if(y < 0) {
        y += dimensao*; //ainda não encontrei a razão do multiplicador, mas ela existe :D
    }
    if(y > dimensao) {
        y -= dimensao*;
    }
    if(x < 0) {
        x += dimensao*;
    }
    if(x > dimensao) {
        x -= dimensao*;
    }

    printf("%d %d", x, y);
}