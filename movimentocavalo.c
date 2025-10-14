#include <stdio.h>

int main(){

    int escolha, bispo, cavalo, torre, rainha;      // declaração de variáveis das peças e da escolha do menu

    
    do{
    printf("Escolha qual peça será jogada:\n");     // menu com entrada do usuário
    printf("1. Torre\n");
    printf("2. Rainha\n");
    printf("3. Bispo\n");
    printf("4. Cavalo\n");
    printf("5. Sair\n");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            torre = 1;
            while(torre <= 5)
        {
            printf("Torre: Direita\n");             // estrutura de repetição do movimento da torre
            torre ++;
        }
            break;

        case 2:
            rainha = 1;
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
            cavalo = 1;
            while (cavalo--)                        // estrutura de repetição do movimento do cavalo        
            {
                for (int i = 0; i < 2; i++){
                    printf("Cavalo: Cima\n");
                }
                printf("Cavalo: Direita\n");
                }
            break; 

        case 5:                                     
            printf("Saindo...\n");                  // saída do programa
            break;

        default:
            printf("Opção Inválida!\n");
    }
    } while (escolha != 5);                         // finalização do loop caso seja escolhida a opção 5   

    return 0;
}