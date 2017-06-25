#include <stdio.h>
#include <stdlib.h>
#include "./exemplo2_15.h"

#define NUMERO_VOOS 37

//Preenche os vetores de voo e vagas com numeros randomicos
void preencherVoos(int *voos, int *vagas) {
    int i;
    printf("Preenchendo voos . . . \n\n");
    for(i = 0; i < NUMERO_VOOS; i++){
        voos[i] = rand() % 999;
        vagas[i] = rand() % 200;
        printf("Numero do voo [%d]:%d | ", (i + 1), voos[i]);
        printf("Numero de vagas para o voo [%d]:%d\n", (i + 1), vagas[i]);
    }
}
//Exemplo 2.15 Livro Harry Farrer
int reservaVoo() {
    //Declaracao de variaveis
    int voos[NUMERO_VOOS];
    int vagas[NUMERO_VOOS];  
    int cliente, numero_voo, i;
    int voo = 9999;
    //Chama funcao preencherVoos
    preencherVoos(voos, vagas);

    //While da interface
    while(1) {
        printf("Digite o numero do cliente:");
        scanf("%d", &cliente);
        //Se o cliente for igual 9999 saia do loop
        if(cliente == 9999) {
            break;
        }
        printf("Digite o numero do voo:");
        scanf("%d", &numero_voo);
        //Verifica se voo existe
        for(i = 0; i < NUMERO_VOOS; i++) {
            if(voos[i] == numero_voo) {
                voo = i;
                break;
            }
        }
        //Se voo nao foi encontrado
        if(voo == 9999) {
            printf("Numero do voo nao existe! \n\n\n");
        }else {
            //Verifica se ha vagas
            if(vagas[voo] > 0) {
                printf("Cliente: %d, Alocado para Voo: %d \n", cliente, voos[voo]);
                vagas[voo] = vagas[voo] - 1;
                printf("Vagas restantes: %d \n", vagas[voo]);
            } else {
                printf("Voo: %d, LOTADO! \n", voos[voo]);
            }
        }
    }
    return 0;
}

