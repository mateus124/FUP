#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    scanf("%f %f", &n1, &n2);
    media = (n1+n2)/2;

    if(media >= 7) {
        printf("aprovado");
    } else if(media >=4) {
        scanf("%f", &n3);
        media += n3;
        media /= 2;
        if(media >= 5) {
            printf("aprovado na final");
        } else {
            printf("reprovado na final");
        }
    } else {
        printf("reprovado");
    }
}