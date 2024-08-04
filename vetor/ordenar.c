#include <stdio.h>

int main() {
    int tamVetor, atual, x;
    scanf("%d", &tamVetor);
    int vetorComum[tamVetor], vetorOrdenado[tamVetor];

    for(int i = 0; i < tamVetor; i++) {
        scanf("%d", &vetorComum[i]);
    }

    for(int i = 0; i < tamVetor; i++) {
        //pegando o menor numero do vetor
        atual = 999;
        for(x = 0; x < tamVetor; x++) {
            if(vetorComum[x] < atual) {
                atual = vetorComum[x];
            }
        }

        //Adicionando o menor numero no novo vetor
        vetorOrdenado[i] = atual;

        //Deletando o numero que foi utilizado
        for(x = 0; x < tamVetor; x++) {
            if(atual == vetorComum[x]) {
                vetorComum[x] = 999;
                break;
            }
        }
    }

    for(int i = 0; i < tamVetor; i++) {
        printf("%d", vetorOrdenado[i]);
        if(i != tamVetor-1) {
            printf(" ");
        }
    }
}