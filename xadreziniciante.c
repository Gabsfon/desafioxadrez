#include <stdio.h>

int main(){

    int rainha = 1, bispo, torre = 1;

    while(torre <= 5)
    {
        printf("Torre: Direita\n");
        torre ++;
    }

    do {
        printf("Rainha: Esquerda\n");
        rainha ++;
    } while (rainha <= 8);

    for (bispo = 1; bispo <= 5 ; bispo++){
        printf("Bispo: Cima, Direita\n");
    }

    return 0;
}