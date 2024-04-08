#include <stdio.h>

int main() {
    int comeco, fim, soma = 0;
    scanf("%d %d", &comeco, &fim);
    if(comeco > fim) {
        printf("invalido\n");
        return 0;
    }
    while(comeco <= fim) {
        if(comeco%2==0) {
            soma+= comeco;
        }
        comeco++;
    }
    printf("%d\n", soma);
}