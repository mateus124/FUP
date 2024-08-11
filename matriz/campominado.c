#include <stdio.h>

int main() {
    int linhas, colunas, numero;
    scanf("%d %d", &linhas, &colunas);
    char matriz[linhas][colunas];
    for(int i = 0; i < linhas; i++) {
        for(int x = 0; x < colunas; x++) {
            scanf(" %c", &matriz[i][x]);
        }
    }

    for(int i = 0; i < linhas; i++) {
        for(int x = 0; x < colunas; x++) {
            numero = 0;
            //caso especial linha 0
            if(i == 0) {
                //caso especial coluna 0
                if(x == 0) {
                    if(matriz[i][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i+1][x] == '*') {
                        numero++;
                    }
                    if(matriz[i+1][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i][x] == '*') {
                        printf("*");    
                    }else if(numero == 0) {
                        printf("-");
                    } else {
                        printf("%d",numero);
                    }
                } else if(x == colunas-1) { //caso especial ultima coluna
                    if(matriz[i][x-1] == '*') {
                        numero++;
                    }
                    if(matriz[i+1][x] == '*') {
                        numero++;
                    }
                    if(matriz[i+1][x-1] == '*') {
                        numero++;
                    }
                    if(matriz[i][x] == '*') {
                        printf("*");    
                    }else if(numero == 0) {
                        printf("-");
                    } else {
                        printf("%d",numero);
                    }
                } else { //caso comum
                    if(matriz[i][x-1] == '*') {
                        numero++;
                    }
                    if(matriz[i][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i+1][x-1] == '*') {
                        numero++;
                    } 
                    if(matriz[i+1][x] == '*') {
                        numero++;
                    }
                    if(matriz[i+1][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i][x] == '*') {
                        printf("*");    
                    }else if(numero == 0) {
                        printf("-");
                    } else {
                        printf("%d",numero);
                    }
                }
            } else if(i == linhas-1) { //caso especial ultima linha
                //caso especial coluna 0
                if(x == 0) {
                    if(matriz[i][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i-1][x] == '*') {
                        numero++;
                    }
                    if(matriz[i-1][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i][x] == '*') {
                        printf("*");    
                    }else if(numero == 0) {
                        printf("-");
                    } else {
                        printf("%d",numero);
                    }
                } else if(x == colunas-1) { //caso especial ultima coluna
                    if(matriz[i][x-1] == '*') {
                        numero++;
                    }
                    if(matriz[i-1][x] == '*') {
                        numero++;
                    }
                    if(matriz[i-1][x-1] == '*') {
                        numero++;
                    }
                    if(matriz[i][x] == '*') {
                        printf("*");    
                    }else if(numero == 0) {
                        printf("-");
                    } else {
                        printf("%d",numero);
                    }
                } else { //caso comum
                    if(matriz[i][x-1] == '*') {
                        numero++;
                    }
                    if(matriz[i][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i-1][x-1] == '*') {
                        numero++;
                    } 
                    if(matriz[i-1][x] == '*') {
                        numero++;
                    }
                    if(matriz[i-1][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i][x] == '*') {
                        printf("*");    
                    }else if(numero == 0) {
                        printf("-");
                    } else {
                        printf("%d",numero);
                    }
                }
            } else { // linhas do meio
                if(x == 0) { //primeira coluna
                    if(matriz[i][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i-1][x] == '*') {
                        numero++;
                    }
                    if(matriz[i-1][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i+1][x] == '*') {
                        numero++;
                    }
                    if(matriz[i+1][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i][x] == '*') {
                        printf("*");    
                    }else if(numero == 0) {
                        printf("-");
                    } else {
                        printf("%d",numero);
                    }
                } else if(x == colunas-1) { //ultima coluna
                    if(matriz[i][x-1] == '*') {
                        numero++;
                    }
                    if(matriz[i-1][x] == '*') {
                        numero++;
                    }
                    if(matriz[i-1][x-1] == '*') {
                        numero++;
                    }
                    if(matriz[i+1][x] == '*') {
                        numero++;
                    }
                    if(matriz[i+1][x-1] == '*') {
                        numero++;
                    }
                    if(matriz[i][x] == '*') {
                        printf("*");    
                    }else if(numero == 0) {
                        printf("-");
                    } else {
                        printf("%d",numero);
                    }
                } else { //casos comuns
                    if(matriz[i-1][x-1] == '*') {
                        numero++;
                    }
                    if(matriz[i-1][x] == '*') {
                        numero++;
                    }
                    if(matriz[i-1][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i][x-1] == '*') {
                        numero++;
                    }
                    if(matriz[i][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i+1][x-1] == '*') {
                        numero++;
                    }
                    if(matriz[i+1][x] == '*') {
                        numero++;
                    }
                    if(matriz[i+1][x+1] == '*') {
                        numero++;
                    }
                    if(matriz[i][x] == '*') {
                        printf("*");    
                    }else if(numero == 0) {
                        printf("-");
                    } else {
                        printf("%d",numero);
                    }
                }
            }
        }
        printf("\n");
    }
}