#include <stdio.h>

int main()  {
    int profundidade, salto, escorrega, altura = 0, formatacao = 0, aux = 0;
    scanf("%d %d %d", &profundidade, &salto, &escorrega);
    altura -= salto;

    while(1) {
        //pulo
        if(formatacao == 0) {
            altura = altura+salto;
            printf("%d ", altura);
            formatacao++;
        } else {
            altura = altura+salto;
            printf("%d\n", altura);
            formatacao--;
        }
        
        //escorregou
        if(aux != 0) {
            if(formatacao == 0) {
                altura -= escorrega;
                printf("%d ", altura);
                formatacao++;
            } else {
                altura -= escorrega;
                printf("%d\n", altura);
                formatacao--;
            }
        }
        
        //cansou
        if(aux != 0) {
            if(salto > 0) {
                salto -=10;
            } else {
                salto = 0;
            }
        }
        
        //check fim
        if((altura+salto) >= profundidade) {
            printf("saiu");
            break;
        } else if(altura < 0) {
            printf("morreu");
            break;
        }
        aux++;
    }
}