#include <stdio.h>

int main() {
    float p1, p2, p3, trab, media;
    float menor = 999;

    scanf("%f %f %f %f", &p1, &p2, &p3, &trab);
    
    //Descobrindo qual nota foi a menor
    if(p1 < menor) {
        menor = p1;
    }
    if(p2 < menor) {
        menor = p2;
    }
    if(p3 < menor) {
        menor = p3;
    }

    //calculo diminuindo a menor nota da soma final
    media = (p1+p2+p3+trab-menor)/3;

    //comparação de aprovado
    if (media >= 7) {
        printf("Aprovado com %.1f", media);
    } else {
        printf("Final com %.1f", media);
    }
}