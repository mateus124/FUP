#include <stdio.h>

int main() {
    int heli, pm, fugitivo, direc;
    scanf("%d %d %d %d", &heli, &pm, &fugitivo, &direc);

    if(direc == 1) {
        while(1) {
            fugitivo++;
            if(fugitivo == 16) {
                fugitivo = 0;
            }

            if(fugitivo == pm) {
                printf("N");
                break;
            } else if (fugitivo == heli) {
                printf("S");
                break;
            }
        }
    } else {
        while(1) {
            fugitivo--;
            if(fugitivo == -1) {
                fugitivo = 15;
            }

            if(fugitivo == pm) {
                printf("N");
                break;
            } else if (fugitivo == heli) {
                printf("S");
                break;
            }
        }
    }
}