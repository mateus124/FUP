#include <stdio.h>

int main() {
    char jogada;
    int jog1, jog2;
    scanf("%c %d %d", &jogada, &jog1, &jog2);
    
    if(jogada == 'p') {
        if((jog1+jog2)%2 == 0) {
            printf("Venceu");
        } else {
            printf("Perdeu");
        }
    } else {
        if((jog1+jog2)%2 == 0) {
            printf("Perdeu");
        } else {
            printf("Venceu");
        }
    }
}