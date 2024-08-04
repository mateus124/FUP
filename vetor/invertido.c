#include <stdio.h>

int main() {
    int tamVetor;
    scanf("%d", &tamVetor);
    int vetor[tamVetor];

    for(int i = 0; i < tamVetor; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i = tamVetor-1; i >= 0; i--) {
        printf("%d", vetor[i]);
        if(i != 0) {
            printf(" ");
        }
    }
}