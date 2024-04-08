#include <stdio.h>

int main() {
    int nota1, nota2, media, final;
    scanf("%d %d", &nota1, &nota2);
    media = (nota1+nota2)/2;
    if(media >= 7) {
        printf("aprovado");
    } else if (media >= 4) {
        scanf("%d", &final);
        media = (media+final)/2;
        if(media >= 5) {
            printf("aprovado na final");
        } else {
            printf("reprovado na final");
        }
    } else {
        printf("reprovado");
    }
    printf("\n");
}