#include <stdio.h>

int main() {
    char letra;
    scanf("%c", &letra);

    if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("VOGAL");
    } else {
        printf("CONSOANTE");
    }
}