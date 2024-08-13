#include <stdio.h>

int main() {
    int linhas, colunas, soma = 0;
    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];
    for(int i = 0; i < linhas; i++) {
        for(int x = 0; x < colunas; x++) {
            scanf("%d", &matriz[i][x]);
            soma += matriz[i][x];
        }
        printf("%d\n", soma);
        soma = 0;
    }
}