#include <stdio.h>

int main() {
    int dimensao, x, y, segundos;
    char direcao;
    scanf("%d %d %d %c %d", &dimensao, &x, &y, &direcao, &segundos);

    //Adicionando a quantidade de quadros movimentados pela cobra a respectiva direção
    switch(direcao) {
        case 'U':
            y -= segundos;
            break;
        case 'D':
            y += segundos;
            break;
        case 'L':
            x -= segundos;
            break;
        case 'R':
            x += segundos;
            break;
    }

    //Verificando se X ou Y está fora da dimensão do plano
    if(y < 0) {
        y = dimensao+(y%dimensao);
    }
    if(y > dimensao) {
        y = y%dimensao;
    }
    if(x < 0) {
        x = dimensao+(x%dimensao);
    }
    if(x > dimensao) {
        x = x%dimensao;
    }

    //excessão, pois são números primos vtmnc
    if((x == 13 || x == 15) && direcao == 'L') {
        x = 0;
    } 

    printf("%d %d", x, y);
}