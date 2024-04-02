#include <stdio.h>

int main() {
    int serieA, sede, uniforme;
    scanf("%d %d %d", &serieA, &sede, &uniforme);

    switch(sede) {
        case 1:
            if(uniforme == 1) {
                printf("Ceará");
            } else {
                if(serieA == 1) {
                    printf("Fortaleza");
                } else {
                    printf("Floresta");
                }
            }
            break;
        case 2:
            printf("Guarany(s)");
    }
}