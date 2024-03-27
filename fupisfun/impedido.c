#include <stdio.h>

int main() {
    int R, L, D; 
    //55, 68, 67
    scanf("%d %d %d", &L, &R, &D);
    
    if((R > 50) && (L < R) && (R > D)) {
        printf("S\n");
    } else {
        printf("N\n");
    }
}