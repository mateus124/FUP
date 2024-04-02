#include <stdio.h>

int main() {
    int max, alunos, viagens;
    scanf("%d %d", &max, &alunos);
    max--;

    viagens = alunos/max;
    
    if(alunos%max != 0) {
        viagens++;
    }

    printf("%d", viagens);
}