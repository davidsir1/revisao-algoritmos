#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
}aluno_t;

int main() {

    aluno_t* aluno = (aluno_t*)malloc(sizeof(aluno_t));

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno->nome);

    printf("Digite a quantidade de faltas do %s: ", aluno->nome);
    scanf("%d", &aluno->faltas);

    printf("Digite a nota do %s: ", aluno->nome);
    scanf("%f", &aluno->nota);

    if (aluno->nota >= 7.0 && aluno->faltas < 24) {
        printf("Aluno %s APROVADO!\n", aluno->nome);
    } else {
        printf("Aluno %s REPROVADO!\n", aluno->nome);
    }

    free(aluno);
    aluno = NULL;

    return 0;
}
