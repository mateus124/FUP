#include <stdio.h>

int main() {
    int dezena;
    scanf("%d", &dezena);

    switch(dezena) {
        case 0:
            printf("Crianca");
            break;
        case 1:
            printf("Adolescente");
            break;
        case 2:
        case 3:
            printf("Adulto jovem");
            break;
        case 4:
        case 5:
            printf("Adulto");
            break;
        default:
            printf("Melhor idade");
    }
}