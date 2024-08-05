#include <stdio.h>

int main() {
    int tamVetor, diff, contador = 0, impar = 0;
    scanf("%d", &tamVetor);
    int vetor[tamVetor];

    for(int i = 0; i < tamVetor; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < tamVetor; i++) {
        if(vetor[i] > vetor[i+1]) {
            diff = vetor[i] - vetor[i+1];
        } else {
            diff = vetor[i+1] - vetor[i];
        }

        if(diff > 1) {
            contador++;
        }
    }

    printf("%d", contador-1);
}