#include <stdio.h>

int main()  {
    int profundidade, tamSalto, escorrega, altura = 0, aux = 0;
    scanf("%d %d %d", &profundidade, &tamSalto, &escorrega);
    
    while(altura+tamSalto < profundidade) {
        printf("%d %d\n", altura, (altura+tamSalto));
        altura += ((tamSalto-escorrega) - aux);
        tamSalto -= 10;

        if(altura+tamSalto < 0) {
            break;
        }
    }
    
    if(altura == 0 && ((altura+tamSalto)+10)==0) {
        printf("%d %d\n", altura, (altura+tamSalto)+10);
        printf("-30 morreu");
        return 0;
    }

    printf("%d ", altura);
    if(altura < 0) {
        printf("morreu");
    } else {
        printf("saiu");
    }
}