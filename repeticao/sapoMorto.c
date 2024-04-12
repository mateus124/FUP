#include <stdio.h>

int main()  {
    int profundidade, salto, escorrega, altura = 0, formatacao = 0, aux = 0;
    scanf("%d %d %d", &profundidade, &salto, &escorrega);
    altura -= salto;

    while(1) {
        //pulo
        altura = altura+salto;
        if(formatacao == 0) { 
            printf("%d ", altura); //Zero faz print a esquerda
            formatacao++;
        } else {
            printf("%d\n", altura); //Quando for 1, o print é a direita e quebra linha
            formatacao--;
        }
        
        //escorregou
        if(aux != 0) { //Aux é uma variável para não bugar no valor 0
            altura -= escorrega;
            if(formatacao == 0) {
                printf("%d ", altura);
                formatacao++;
            } else {
                printf("%d\n", altura);
                formatacao--;
            }
        }
        
        //cansou
        if(aux != 0) {
            if(salto > 0) {
                salto -=10;
            } else { //O tamanho do salto não pode ser negativo
                salto = 0;
            }
        }
        
        //check fim
        if((altura+salto) >= profundidade) { //Se no próximo salto ele sair, já encerra o código
            printf("saiu");
            break;
        } else if(altura < 0) {
            printf("morreu");
            break;
        }
        aux++;
    }
}