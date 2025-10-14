#include <stdio.h>

int main(){

    int rainha = 1, bispo, torre = 1, escolha;      // declaração de variáveis das peças e da escolha do menu

    
    do{
    printf("Escolha qual peça será jogada:\n");     // menu com entrada do usuário
    printf("1. Torre\n");
    printf("2. Rainha\n");
    printf("3. Bispo\n");
    printf("4. Sair\n");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            while(torre <= 5)
        {
            printf("Torre: Direita\n");             // estrutura de repetição do movimento da torre
            torre ++;
        }
            break;

        case 2:
            do {
            printf("Rainha: Esquerda\n");           // estrutura de repetição do movimento da rainha
            rainha ++;
            } while (rainha <= 8);
            break;

        case 3:
            for (bispo = 1; bispo <= 5 ; bispo++){  // estrutura de repetição do movimento do bispo
            printf("Bispo: Cima, Direita\n");
            }
            break;

        case 4:                                     
            printf("Saindo...\n");                  // saída do programa
            break;

        default:
            printf("Opção Inválida!\n");
    }
    } while (escolha != 4);                         // finalização do loop caso seja escolhida a opção 4   

    return 0;
}