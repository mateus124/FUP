#include <stdio.h>

int main() {
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas], vetor[101];
    for(int i = 0; i <= 100; i++) {
        vetor[i] = 0;
    }
    for(int i = 0; i < linhas; i++) {
        for(int x = 0; x < colunas; x++) {
            scanf("%d", &matriz[i][x]);
            vetor[matriz[i][x]]++;
        }
    }
    for(int i = 0; i <= 100; i++) {
        if(vetor[i] != 0) {
            printf("%d-%d\n", i, vetor[i]);
        }
    }
}