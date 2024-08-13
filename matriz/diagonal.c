#include <stdio.h>

int main() {
    int matriz[5][5], soma = 0;
    for(int i = 0; i < 5; i++) {
        for(int x = 0; x < 5; x++) {
            scanf("%d", &matriz[i][x]);
            if(i == x) {
                soma += matriz[i][x];
            }
            if((i+x) == 4) {
                soma -= matriz[i][x];
            }
        }
    }
    printf("%d", soma);
}