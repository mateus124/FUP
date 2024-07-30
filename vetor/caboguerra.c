#include <stdio.h>

int main() {
    int qtdPessoas, jedi = 0, sith = 0;
    scanf("%d", &qtdPessoas);

    int vetor[qtdPessoas];
    for(int i = 0; i < qtdPessoas; i++) {
        scanf("%d", &vetor[i]);

        if(i < qtdPessoas/2) {
            jedi += vetor[i];
        } else {
            sith += vetor[i];
        }
    }

    if(jedi > sith) {
        printf("Jedi");
    } else if(sith > jedi) {
        printf("Sith");
    } else {
        printf("Empate");
    }
}