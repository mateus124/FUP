#include <stdio.h>

int main() {
    int num1, num2, maior = -999, menor = 999;
    scanf("%d", &num1);

    for(int i = 0; i < num1; i++) {
        scanf("%d", &num2);
        if(num2 > maior) {
            maior = num2;
        }
        if(num2 < menor) {
            menor = num2;
        }
    }
    printf("%d %d", maior, menor);
}