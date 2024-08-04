#include <stdio.h>

int main() {
    int tamVetor, somaPar = 0, somaImpar = 0;
    scanf("%d", &tamVetor);

    int vetor[tamVetor];

    for(int i = 0; i < tamVetor; i++) {
        scanf("%d", vetor[i]);
        if(vetor[i]%2 == 0) {
            somaPar+=vetor[i];
        } else {
            somaImpar+=vetor[i];
        }
    }

    if(somaPar > somaImpar) {
        printf("rebeldes");
    } else if(somaImpar > somaPar) {
        printf("soldados");
    } else {
        printf("empate");
    }
}