#include <stdio.h>

int main() {
    int dia, hora, minuto;
    scanf("%d %d %d", &dia, &hora, &minuto);
    
    if(dia == 7 && hora <= 11 && minuto <= 59) {
            printf("SIM");
    } else if(dia >= 2 && dia <= 6) {
         if(((hora >= 8 && hora <= 11) || (hora >= 14 && hora <= 17)) && minuto <= 59) {
            printf("SIM");
        } else {
            printf("NAO");
        }
    } else {
        printf("NAO");
    }
}