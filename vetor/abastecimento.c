#include <stdio.h>

int main() {
    int qtdCasas, qtdCaminhoes;
    scanf("%d %d", &qtdCasas, &qtdCaminhoes);
    int pontoA[qtdCaminhoes], pontoB[qtdCaminhoes], litros[qtdCaminhoes], casas[qtdCasas];

    //Formatando o vetor de casas
    for(int i = 0; i < qtdCasas; i++) {
        casas[i] = 0;
    }

    //Lendo os valores de cada caminhao
    for(int i = 0; i < qtdCaminhoes; i++) {
        scanf("%d %d %d", &pontoA[i], &pontoB[i], &litros[i]);

        //Fazendo a rota do caminhao i
        for(int x = pontoA[i]; x <= pontoB[i]; x++) {
            casas[x] += litros[i];
        }
    }

    //Print do vetor de resultado
    for(int i = 0; i < qtdCasas; i++) {
        printf("%d", casas[i]);

        if(i != qtdCasas-1) {
            printf(" ");
        }
    }
}