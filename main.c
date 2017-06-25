#include <stdio.h>
#include "exemplo2_15.h"
#include "exemplo2_16.h"
#include "exemplo2_17.h"

int main() {
    int opcao;
    //Interface do menu
    printf("Digite o numero da opcao desejada: \n");
    printf("0 - SAIR \n");
    printf("1 - Exemplo 2.15 Farrer \n");
    printf("2 - Exemplo 2.16 Farrer \n");
    printf("3 - Exemplo 2.17 Farrer \n");
    scanf("%d", &opcao);
    //While do menu
    while(opcao != 0) {
        switch(opcao) {
            case 1:
                reservaVoo();
                return 0;
                break;
            case 2:
                corrigeProva();
                return 0;
                break;
            case 3:
                ordernar();
                return 0;
                break;
            default:
                printf("Opcao nao encontrada \n");
                return 0;
                break;
        }
    }
    return 0;
}