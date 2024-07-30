#include <stdio.h>

int main() {
    int qtdSoldados;
    scanf("%d", &qtdSoldados);

    float vetor[qtdSoldados], media;
    for(int i = 0; i < qtdSoldados; i++) {
        scanf("%f", &vetor[i]);
        media += vetor[i];
    }

    media /= qtdSoldados;
    printf("%.2f\n", media);
    
    for(int i = 0; i < qtdSoldados; i++) {
        if(vetor[i] > media) {
            printf("G");
        } else if(vetor[i] < media-0.01) {
            printf("P");
        } else {
            printf("M");
        }

        if(i != qtdSoldados-1) {
            printf(" ");
        }
    }
}
