#include <stdio.h>

int main() {
    int capacidade, fluxo, atual = 0;
    scanf("%d", &capacidade);

    while(1){
        scanf("%d", &fluxo);
        atual += fluxo;
        if(atual == 0) {
            printf("vazio\n");
        } else if(atual < capacidade) {
            printf("ainda cabe\n");
        } else if(atual < capacidade*2) {
            printf("lotado\n");
        } else {
            printf("hora de partir\n");
            return 0;
        }
    }
}