#include <stdio.h>

//Exemplo 2.16 Farrer
int corrigeProva() {
    char gabarito[11];
    char respostas[11];
    int frequencia[11];
    int i = 0;
    int numero_aluno = 0;
    int nota = 0;
    int total = 0;
    int aprovados = 0;
    int maior = 0;
    int nota_maior = 0;
    float porcentagem = 0;

    printf("Digite o gabarito . . . \n");
    // Define valor padrao para frequencia e captura gabarito
    for(i = 1; i < 11; i++) {
        frequencia[i] = 0;
        printf("Digite o gabarito [%d]:", i);
        scanf("%s", &gabarito[i]);
    }
    while(numero_aluno != 9999) {

        printf("Digite o numero do aluno:");
        scanf("%d", &numero_aluno);
        //Se numero do aluno for 9999 saia do loop
        if(numero_aluno == 9999) {
            break;
        }
        //Captura as respostas
        for(i = 1; i < 11; i++) {
            printf("Digite a resposta do exercicio [%d]:", i);
            scanf("%s", &respostas[i]);
        }
        
        nota = 0;
        //Define a nota confrome respostas inseridas
        for(i = 1; i < 11; i++) {
            printf("%d - Gabarito [%c] Resposta [%c] \n", i, gabarito[i], respostas[i]);
            if(gabarito[i] == respostas[i]) {
                nota = nota + 1;
            }
        }
        printf("Aluno: %d, Nota: %d \n", numero_aluno, nota);
        
        total = total + 1;
        frequencia[nota] = frequencia[nota] + 1;
        aprovados = 0;
        //Verifica o numero de aprovados
        for(i = 6; i < 11; i++) {
            aprovados = aprovados + frequencia[i];
        }
        //Define porcentagem de aprovados
        porcentagem = (float)aprovados / total * 100;
        maior = 0;

        //Verifica a nota de maior frequencia
        for(i = 1; i < 11; i++) {
            if(frequencia[i] > maior) {
                maior = frequencia[i];
                nota_maior = i;
            }
        }

        printf("Nota de maior frequencia: %d, Porcentagem de aprovados: %.2f, Aprovados: %d, Total:  %d \n\n", nota_maior, porcentagem, aprovados, total);
    }
    return 0;
}