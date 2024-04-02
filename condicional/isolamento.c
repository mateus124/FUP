#include <stdio.h>

int main() {
    char casos1, casos2;
    scanf("%c %c", &casos1, &casos2);

    if(casos1 == 'A' && casos2 == 'D') {
        printf("isolamento");
    } else {
        switch(casos2) {
            case 'A':
                printf("isolamento");
                break;
            case 'D':
                printf("fim do isolamento");
                break;
        }
    }
}