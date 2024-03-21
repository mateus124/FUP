#include <stdio.h>
float peso, qtd;

int main() {
    scanf("%f %f", &peso, &qtd);
    peso = peso*1000;
    qtd = (qtd*2)*5;
    printf("%f", peso-qtd);
    return 0;
}
