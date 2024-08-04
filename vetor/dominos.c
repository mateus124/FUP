#include <stdio.h>

int main() {
    int tamVetor, ok = 0;
    scanf("%d", &tamVetor);
    int vetor[tamVetor];

    for(int i = 0; i < tamVetor; i++) {
        scanf("%d", &vetor[i]);

        if(vetor[i] >= vetor[i-1]) {
            ok = 0;
        } else {
            ok = 1;
        }
    }

    if(tamVetor == 1) {
        ok = 0;
    }

    if(ok == 0) {
        printf("ok");
    } else {
        printf("precisa de ajuste");
    }
}