#include <stdio.h>

int main() {
    char tipo;
    int forca, poder, tipov;
    scanf("%c %d", &tipo, &forca);

    if (tipo == 'b') {
        tipov = 20;
    } else {
        tipov = 18;
    }

    poder = ((forca*tipov)-80)/10;

    if(poder > 210) {
        printf("Muito forte, bola fora\n");
    } else if (poder >= 180) {
        printf("Satisfeito\n");
    } else if (poder >= 150) {
        printf("Perfeito\n");
    } else {
        printf("Fraco, nem passou\n");
    }
} 