#include <stdio.h>

int main(){
    //Loop da Torre
    for (int torre = 1; torre <= 5; torre++) {
        printf("Torre: Direita...\n");
    }

    int bispo = 1, rainha = 1;

    printf("\n");
    
    //Loop do Bispo
    while (bispo <= 5) {
        printf("Bispo: Cima...\n");
        printf("Bispo: Direita...\n");
        bispo++;
    }

    printf("\n");

    //Loop da Rainha
    do
    {
        printf("Rainha: Esquerda...\n");
        rainha++;
    } while (rainha <= 8);
    
    return 0;
}