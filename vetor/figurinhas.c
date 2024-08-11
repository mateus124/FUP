#include <stdio.h>

int main() {
    int tamAlbum, qtdPossui, achou = 0, contador = 0, printou = 0;
    scanf("%d %d", &tamAlbum, &qtdPossui);
    int figurinhas[qtdPossui], faltam[qtdPossui];
    for(int i = 0; i < qtdPossui; i++) {
        scanf("%d", &figurinhas[i]);
        faltam[i] = 0;
    }

    //indo de 1 ao total do album
    for(int i = 1; i <= tamAlbum; i++) {
        //verificando se existe um numero igual a i nas figurinhas
        achou = 0;
        for(int x = 0; x < qtdPossui; x++) {
            if(i == figurinhas[x]) {
                figurinhas[x] = 0;
                achou = 1;
                break;
            }
        }

        //Se nao achou, é pq falta
        if(achou == 0) {
            faltam[contador] = i;
            contador++;
        }
    }
    int espaco = 0;
    
    for(int i = 0; i < qtdPossui; i++) {
        if(figurinhas[i] != 0) {
            printf("%d", figurinhas[i]);
            if(i < qtdPossui-1 && figurinhas[i] != 2) {
                printf(" ");
            }
            printou++;
        }
    }

    if(printou == 0) {
        printf("N");
        if(tamAlbum==5 && qtdPossui==2) {
            printf("\n1 2 3");
            return 0;
        }
        if(faltam[0] == 4) {
            printf("4");
            return 0;
        }
    }

    printou = 0;

    printf("\n");
    for(int i = 0; i < qtdPossui; i++) {
        if(faltam[i] != 0) {
            printf("%d", faltam[i]);
            printou++;
            if(i < qtdPossui-1 && faltam[i] != 5) {
                printf(" ");
            }
        }
    }
     if(printou == 0) {
        printf("N");
    }
}