#include <stdio.h>

void torre(int casas) {
    if (casas > 0) {
        printf("Torre: Direita...\n");
        torre(casas - 1);
    }
}

void bispo(int casas) {
    for (casas = 1; casas <= 5; casas++) {
        for (int l = 1; l <= 1; l++) {
            printf("Bispo: Cima...\n");
        }
        printf("Bispo: Direita...\n");
    }
}
    
void rainha(int casas) {
    if (casas > 0) {
        printf("Rainha: Esquerda...\n");
        rainha(casas - 1);
    }
}

int main(){
     //Loop da Torre
    printf("Movimento da Torre:\n");
    torre(5);

    printf("\n");

    //Loop do Bispo
    printf("Movimento do Bispo:\n");
    bispo(5);

    printf("\n");

    //Loop da Rainha
    printf("Movimento da Rainha:\n");
    rainha(8);

    printf("\n");

    int cavalo = 1;

    //Loop do Cavalo
    printf("Movimento do Cavalo:\n");
    while (cavalo--) {
        for (int l = 1; l <= 2; l++) {
            printf("Cavalo: Baixo...\n");
        }
        printf("Cavalo: Esquerda...\n");
    }

    return 0;
}