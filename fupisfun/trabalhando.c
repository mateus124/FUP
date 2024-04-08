#include <stdio.h>

int main(){
    int dia, hora;
    scanf("%d %d", &dia, &hora);
    if(dia == 1) {
        printf("NAO");
    } else if (dia == 7) {
        if(hora >= 8 && hora <= 11) {
            printf("SIM");
        } else {
            printf("NAO");
        }
    } else if((hora >= 8 && hora <= 11) || (hora >= 14 && hora <= 17)) {
        printf("SIM");
    } else {
        printf("NAO");
    }
    printf("\n");
}