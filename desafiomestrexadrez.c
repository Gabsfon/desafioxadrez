#include <stdio.h>

void movimentoTorre(int casas){                         // função recursiva do movimento da torre
    if (casas > 0){
        printf("Direita\n");
        movimentoTorre(casas - 1);
    }
}
void movimentoRainha(int casas){                        // função recursiva do movimento da rainha
    if (casas > 0){
        printf("Esquerda\n");
        movimentoRainha(casas - 1);
    }
}
void movimentoBispo(int casas){                         // função recursiva do movimento do bispo
    if (casas > 0){
        printf("Cima, Direita\n");
        movimentoBispo(casas -1);
    }
}

int main(){

    int cavalo;                                         // declaração da variável do cavalo

    printf("---Torre--- \n");                           // saída no programa das funções declaradas anteriormente
    movimentoTorre(5);
    printf("---Rainha--- \n");
    movimentoRainha(8);
    printf("---Bispo--- \n");
    movimentoBispo(5);
    printf("---Cavalo--- \n");

    cavalo = 1;
        while (cavalo--)                                // estrutura de repetição do movimento do cavalo        
        {
            for (int i = 0; i < 2; i++){
                printf("Cima\n");
            }
            printf("Direita\n");
                }
    return 0;
}