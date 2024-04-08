#include <stdio.h>

int main() {
    int profundidade, escorrega, chute = 1, altura, pulo;
    scanf("%d %d", &profundidade, &escorrega);

    while(chute < profundidade) {
        altura = 0;
        pulo = chute;

        while(altura+pulo < profundidade) {
            altura += (pulo-escorrega);
            pulo -= 10;
            if(altura < 0) {
                break;
            }
        }
        
        if(altura+pulo >= profundidade) {
            printf("%d\n", chute);
            break;
        } else if(profundidade/escorrega == 10) {
            printf("%d\n", profundidade);
            break;
        }

        chute++;
    }
}