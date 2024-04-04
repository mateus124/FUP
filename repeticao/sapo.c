#include <stdio.h>

int main()  {
    int profundidade, tamSalto, escorrega, altura = 0;
    scanf("%d %d %d", &profundidade, &tamSalto, &escorrega);
    
    while(altura+tamSalto < profundidade) {
        printf("%d %d\n", altura, (altura+tamSalto));
        altura += (tamSalto-escorrega);
    }

    printf("%d saiu", altura);
}