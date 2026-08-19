#include <stdio.h>

int main() {

    char nome_estudante[64];
    float nota1, nota2, media, frequencia;

    printf("Digite o nome do aluno: ");
    scanf("%s", &nome_estudante);

    printf("Digite a nota 1 do %s: ", nome_estudante);
    scanf("%f", &nota1);

    printf("Digite a nota 2 do %s: ", nome_estudante);
    scanf("%f", &nota2);

    printf("Digite a frequencia do %s: ", nome_estudante);
    scanf("%f", &frequencia);

    media = (nota1+nota2)/2;

    if (media >= 7.0 && frequencia >= 75.0) {
        printf("%s APROVADO!\n", nome_estudante);
    } else {
        printf("%s REPROVADO!\n", nome_estudante);
    }
    
    return 0;
}
