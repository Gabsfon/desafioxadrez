#include <stdio.h>

void movimentoTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        movimentoTorre(casas - 1);
    }
}
void movimentoRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
}
void movimentoBispo(int casas){
    if (casas > 0){
        printf("Cima, Direita\n");
        movimentoBispo(casas -1);
    }
}

int main(){

    int cavalo;

    printf("---Torre--- \n");
    movimentoTorre(5);
    printf("---Rainha--- \n");
    movimentoRainha(8);
    printf("---Bispo--- \n");
    movimentoBispo(5);
    printf("---Cavalo--- \n");

    cavalo = 1;
        while (cavalo--)                        // estrutura de repetição do movimento do cavalo        
        {
            for (int i = 0; i < 2; i++){
                printf("Cima\n");
            }
            printf("Direita\n");
                }
    return 0;
}