#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 200

//Preenche vetor com numeros randomicos
void preencheNumeros(int *numeros) {
    int i;
    printf("Numeros nao ordenados \n\n");
    for(i = 0; i < TAMANHO; i++) {
        numeros[i] = rand() % 999;
        printf("Numero: %d - %d \n", i, numeros[i]);
    }
}
//Exemplo 2.17 Farrer
int ordernar() {
    int numeros[TAMANHO];
    int aux, j, i;
    preencheNumeros(numeros);

    for(j = 1; j < TAMANHO; j++) {
        aux =  numeros[j];
        i = j;

        for(i = i - 1; i > 0; i--) {
            if(aux > numeros[i]) {
                break;
            }

            numeros[i + 1] = numeros[i];
        }
        if(aux > numeros[i]) {
            numeros[i + 1] = aux;
        }else {
            numeros[i + 1] = numeros[i];
            numeros[i] = aux;
        }
    }
    printf("Numeros ordenados \n\n");
    for(i = 0; i < TAMANHO; i++) {
        printf("Numero: %d - %d \n", i, numeros[i]);        
    }
    return 0;
}