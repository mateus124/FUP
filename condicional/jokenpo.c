#include <stdio.h>

int main() {
    int jog1, jog2;
    scanf("%d %d", &jog1, &jog2);
    if (jog1 == jog2) {
        printf("Empate");
    } else {
        switch(jog1) {
            case 0:
                if (jog2 >= 1 && jog2 <= 7) {
                    printf("Jogador 1");
                } else if (jog2 >= 8 && jog2 <= 14) {
                    printf("Jogador 2");
                }
                break;
            case 1:
                if (jog2 >= 2 && jog2 <= 8) {
                    printf("Jogador 1");
                } else if (jog2 == 0 || jog2 >=9 && jog2 <= 14) {
                    printf("Jogador 2");
                }
                break;
            case 2:
                if (jog2 >= 3 && jog2 <= 9) {
                    printf("Jogador 1");
                } else if (jog2 >= 0 && jog2 <= 1 || jog2 >= 10 && jog2 <= 14) {
                    printf("Jogador 2");
                }
                break;
            case 3:
                if (jog2 >= 4 && jog2 <= 10) {
                    printf("Jogador 1");
                } else if (jog2 >= 0 && jog2 <= 2 || jog2 >= 11 && jog2 <= 14) {
                    printf("Jogador 2");
                }
                break;
            case 4:
                if (jog2 >= 5 && jog2 <= 11) {
                    printf("Jogador 1");
                } else if (jog2 >= 0 && jog2 <= 3 || jog2 >= 12 && jog2 <=14) {
                    printf("Jogador 2");
                }
                break;
            case 5:
                if (jog2 >= 6 && jog2 <= 12) {
                    printf("Jogador 1");
                } else if (jog2 >= 0 && jog2 <= 4 || jog2 >= 13 && jog2 <=14) {
                    printf("Jogador 2");
                }
                break;
            case 6:
                if (jog2 >= 7 && jog2 <= 13) {
                    printf("Jogador 1");
                } else if (jog2 >= 0 && jog2 <= 5 || jog2 == 14) {
                    printf("Jogador 2");
                }
                break;
            case 7:
                if (jog2 >= 8 && jog2 <= 14) {
                    printf("Jogador 1");
                } else if (jog2 >= 0 && jog2 <= 6) {
                    printf("Jogador 2");
                }
                break;
            case 8:
                if (jog2 >= 9 && jog2 <= 14 || jog2 == 0) {
                    printf("Jogador 1");
                } else if (jog2 >= 1 && jog2 <= 7) {
                    printf("Jogador 2");
                }
                break;
            case 9:
                if (jog2 >= 10 && jog2 <= 14 || jog2 >= 0 && jog2 <= 1) {
                    printf("Jogador 1");
                } else if (jog2 >= 2 && jog2 <= 8) {
                    printf("Jogador 2");
                }
                break;
            case 10:
                if (jog2 >= 11 && jog2 <= 14 || jog2 >= 0 && jog2 <= 2) {
                    printf("Jogador 1");
                } else if (jog2 >= 3 && jog2 <= 9) {
                    printf("Jogador 2");
                }
                break;
            case 11:
                if (jog2 >= 12 && jog2 <= 14 || jog2 >= 0 && jog2 <= 3) {
                    printf("Jogador 1");
                } else if (jog2 >= 4 && jog2 <= 10) {
                    printf("Jogador 2");
                }
                break;
            case 12:
                if (jog2 >= 13 && jog2 <= 14 || jog2 >= 0 && jog2 <= 4) {
                    printf("Jogador 1");
                } else if (jog2 >= 5 && jog2 <= 11) {
                    printf("Jogador 2");
                }
                break;
            case 13:
                if (jog2 == 14 || jog2 >= 0 && jog2 <= 5) {
                    printf("Jogador 1");
                } else if (jog2 >= 6 && jog2 <= 12) {
                    printf("Jogador 2");
                }
                break;
            case 14:
                if (jog2 >= 0 && jog2 <= 6) {
                    printf("Jogador 1");
                } else if (jog2 >= 7 && jog2 <= 13) {
                    printf("Jogador 2");
                }
            }
    }
}