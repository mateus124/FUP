#include <stdio.h>

int main() {
    int r1, r2, r3;
    char r1c = 'M', r2c = 'M', r3c = 'M';
    scanf("%d %d %d", &r1, &r2, &r3);

    //conferindo maior
    if(r1 > r2 && r1 > r3) {
        r1c = 'G';
    } else if (r2 > r1 && r2 > r3) {
        r2c = 'G';
    } else {
        r3c = 'G';
    }

    //conferindo o menor
    if (r1 < r2 && r1 < r3) {
        r1c = 'P';
    } else if (r2 < r1 && r2 < r3) {
        r2c = 'P';
    } else {
        r3c = 'P';
    }

    printf("%c %c %c", r1c, r2c, r3c);
}