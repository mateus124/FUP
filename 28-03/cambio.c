#include <stdio.h>

int main() {
    int moeda;
    float valor;
    scanf("%f %d", &valor, &moeda);

    switch(moeda){
        case 1:
            valor/=5.32;    
            break;
        case 2:
            valor/=4.4;
            break;
        case 3:
            valor/=6.51;
            break;
        case 4:
            valor/=7.53;
    }
    printf("%.2f", valor);
}