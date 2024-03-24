#include <stdio.h>

int main() {
    int posicoes, disco, aviao, cliques;
    scanf("%d %d %d", &posicoes, &disco, &aviao);

    cliques = disco - aviao;

    if(cliques < 0) {
        cliques += posicoes;
    }

    printf("%d", cliques);
}    