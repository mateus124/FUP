#include <stdio.h>

int main() {
    int tamVetor, possui = 0, contador = 0;
    scanf("%d", &tamVetor);
    int vetor[tamVetor], diferentes[tamVetor];
    for(int i = 0; i < tamVetor; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < tamVetor; i++) {
        possui = 0;
        for(int x = 0; x < sizeof(diferentes)/4; x++) {
            if(vetor[i] == diferentes[x]) {
                possui = 1;
                break;
            }
        }
        if(possui == 0) {
            diferentes[contador] = vetor[i];
            contador++;
        }
    }

    printf("%d", contador);
}