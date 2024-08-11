#include <stdio.h>

int main() {
    int vetor[6], vezes = 0;
    for(int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
    int matriz[4][4];
    for(int i = 0; i < 4; i++) {
        for(int x = 0; x < 4; x++) {
            scanf("%d", &matriz[i][x]);
        }
    }
    for(int v = 0; v < 6; v++) {
        for(int i = 0; i < 4; i++) {
            for(int x = 0; x < 4; x++) {
                if(vetor[v] == matriz[i][x]) {
                    vezes++;
                }
            }
        }
    }
    printf("%d", vezes);
}