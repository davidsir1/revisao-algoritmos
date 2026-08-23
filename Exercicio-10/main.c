#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno* prox;
} aluno_t;


// Prototipos das funções
aluno_t* criar_aluno();
void exibir_alunos(aluno_t* a);

int main() {

    int n = 0; // Total de alunos que serão alocados

    printf("Digite o total de alunos que serão alocados: ");
    scanf("%d", &n);

    aluno_t* inicio = NULL;
    aluno_t* ultimo = NULL;
    for (int i = 0; i < n; i++) {
        aluno_t* novo = criar_aluno();
        printf("Aluno %d:\n", i+1);
        printf("Nome do Aluno: ");
        scanf("%s", novo->nome);
        printf("Nota do Aluno: ");
        scanf("%f", &novo->nota);
        printf("Faltas do Aluno: ");
        scanf("%d", &novo->faltas);

        if (inicio == NULL) {
            inicio = novo;
        } else {
            ultimo->prox = novo;
        }
        ultimo = novo;
    }

    exibir_alunos(inicio);

    return 0;
}

aluno_t* criar_aluno(){
    aluno_t* a = (aluno_t*)malloc(sizeof(aluno_t));

    if (a == NULL) {
        printf("Erro: falha em alocar memória para aluno_t a.\n");
        return NULL;
    }

    a->prox = NULL;

    return a;
}

void exibir_alunos(aluno_t* a) {
    aluno_t* temp = a;

    while(temp != NULL) {
        printf("%s -> ", temp->nome);

        if(temp->nota >= 7.0 && temp->faltas < 24) printf("APROVADO!\n");
        else printf("REPROVADO!\n");

        temp = temp->prox;
    }
}
