#include <stdio.h>

int main() {
    int numero, unidade;
    scanf("%d", &numero);
    
    if(numero >= 100) {
        unidade = (numero%10)*100;
    } else {
        unidade = numero%10;
    }

    while(unidade<=(unidade+1)*100) {
        if(unidade == numero) {
            printf("1");
            return 0;
        }
        unidade++;
    }
    printf("0");
}