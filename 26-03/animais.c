#include <stdio.h>

int main() {
    int classe, habitat, alimento;
    scanf("%d %d %d", &classe, &habitat, &alimento);

    switch(classe) {
        case 1: //Mamiferos
            switch(habitat) {
                case 1: //Mamiferos e terrestres
                    switch(alimento) {
                        case 1: //Mamifero, terrestre e carnivoro
                            printf("Leão");
                            break;
                        case 2: //Mamifero, terrestre e frutifero
                            printf("Macaco");
                            break;
                        case 3: //Mamifero, terrestre e herbivero
                            printf("Cavalo");
                            break;
                    } 
                    break;

                case 2: //Mamiferos e aquáticos
                    switch(alimento) {
                        case 1: //Mamifero, aquático e Carnivoro
                            printf("Foca");
                            break;
                        case 3: //Mamifero, aquático e Herbivoro
                            printf("Peixe-boi");
                            break; 
                    }
                    break;
                
                case 3: //Mamiferos e aéreo
                    printf("Morcego");
                    break;
            }
            break;
        
        case 2: //Aves
            switch(habitat) {
                case 1: //Aves e Terrestres
                    switch(alimento) {
                        case 4: //Ave, terrestre e Onivoro
                            printf("Avestruz");
                            return 0;
                            break;
                        case 1: //Ave, terrestre e Carnivoro
                            printf("Pinguim");
                            break;
                    }

                case 2: //Ave e Aquático
                    printf("Pato");
                    break;
                
                case 3: //Ave e Aéreo
                    printf("Águia");
                    break;
            }
            break;
    }
}