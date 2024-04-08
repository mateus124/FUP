#include <stdio.h>

int main() {
    int lado1, lado2, lado3;
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    
    if(lado1>=(lado2+lado3)) {
        printf("False");
    } else if(lado2>=(lado1+lado3)) {
        printf("False");
    } else if(lado3>=(lado1+lado2)) {
        printf("False");
    } else {
        printf("True");
    }
    printf("\n");
}