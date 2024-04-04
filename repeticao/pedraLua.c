#include <stdio.h>

int main() {
    int jogadores, a, b, distancia, menor = 999, ganhador = -1;
    scanf("%d", &jogadores);

    for(int i = 0; i < jogadores; i++) {
        scanf("%d %d", &a, &b);
        if(a >= 10 && b >= 10) {
            if (a > b) {
                distancia = a-b;
            } else {
                distancia = b-a;
            }
            
            if(distancia < menor) {
                menor = distancia;
                ganhador = i;
            }
        }
    }
    if(ganhador == -1) {
        printf("sem ganhador");
    } else {
        printf("%d", ganhador);
    }
}