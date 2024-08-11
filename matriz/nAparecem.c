#include <stdio.h>

int main() {
    //Matriz A
    int linhasA, colunasA;
    scanf("%d %d", &linhasA, &colunasA);
    int matrizA[linhasA][colunasA];
    for(int i = 0; i < linhasA; i++) {
        for(int x = 0; x < colunasA; x++) {
            scanf("%d", &matrizA[i][x]);
        }
    }

    //Matriz B
    int linhasB, colunasB;
    scanf("%d %d", &linhasB, &colunasB);
    int matrizB[linhasB][colunasB];
    for(int i = 0; i < linhasB; i++) {
        for(int x = 0; x < colunasB; x++) {
            scanf("%d", &matrizB[i][x]);
        }
    }

    //variavel assistente
    int achou = 0, cont = 0;

    //Pegando o item da matriz B
    for(int iB = 0; iB < linhasB; iB++) {
        for(int xB = 0; xB < colunasB; xB++) {
            achou = 0;
            //Percorrendo a matriz A em cada item de B
            for(int iA = 0; iA < linhasA; iA++) {
                for(int xA = 0; xA < colunasA; xA++) {
                    if(matrizA[iA][xA] == matrizB[iB][xB]) {
                        achou = 1;
                    }
                }
            }
            //Se achou continuar 0, é porque o item de B falta em A
            if(achou == 0) { //&& matrizB[iB][xB] < 100 && matrizB[iB][xB] >= 0
                cont++;
                if(cont == 1) {
                    printf("%d", matrizB[iB][xB]);
                    cont++;
                } else {
                    printf(" %d", matrizB[iB][xB]);
                }
            }
        }
    }
    if(cont == 0) {
        printf("N");
    }
}