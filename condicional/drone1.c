#include <stdio.h>

int main() {
    int caixaH, caixaL, caixaC, janelaH, janelaL, areaJ;
    
    //HxL, HxC, LxC
    scanf("%d %d %d %d %d", &caixaH, &caixaL, &caixaC, &janelaH, &janelaL);
    areaJ = janelaH*janelaL;

    if(caixaH*caixaL <= areaJ) {
        printf("S");
    } else if (caixaH*caixaC <= areaJ) {
        printf("S");
    } else if (caixaL*caixaC <= areaJ) {
        printf("S");
    } else {
        printf("N");
    }
}