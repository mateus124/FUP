#include <stdio.h>

int main() {
    int qtdSoldados, resultado = 0;
    scanf("%d", &qtdSoldados);
    
    int vetor[qtdSoldados];
    for(int x = 0; x < qtdSoldados; x++) {
        scanf("%d", &vetor[x]);
    }

    for(int i = 0; i < qtdSoldados; i++) {
        if(vetor[i] != 1) {
            if(i == 0 ) {
                if(vetor[i+1] == 0) {
                    resultado++;
                }
            } else if(i == qtdSoldados-1) {
                if(vetor[i-1] == 0) {
                    resultado++;
                }
            } else {
                if(vetor[i-1] == 0 && vetor[i+1] == 0) {
                    resultado++;
                }
            }
        }
    }
    printf("%d", resultado);
}