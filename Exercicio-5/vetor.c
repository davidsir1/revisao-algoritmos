#include <stdio.h>
#include <string.h>

int main() {

    /*
     * a) O que é um vetor?
     *  Vetor é uma estrutura de dados que permite armazenar uma coleção de elementos do mesmo tipo. Na linguagem
     * C nos tratamos dessa forma: <tipo de dado> nome[<tamanho do vetor>] = {...};
     * Definimos o tamanho do vetor dentro de colchetes após o nome da variável e atribuimos valores para cada indice dentro
     * das chaves, só é feito na hora de declararmos o vetor. Algumas forma de atribuir valores em um vetor é utilizando um laço
     * de repetição ou acessando o indice do vetor.
     *
     * No exemplo abaixo declaramos dois vetores, um chamado 'vetor' de tamanho 10 e o outro chamado 'numeros' de tamanho 5. Os
     * vetores começam apartir do indíce 0.
     */

    int vetor[10];
    int numeros[5] = {1, 2, 3, 4, 5};

    // Percorrendo o vetor 'numeros'
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n"); // Quebra de linha

    // Atribuindo valores em um indice no 'vetor'
    vetor[0] = 12;
    vetor[1] = 56;
    vetor[2] = 6;
    vetor[3]= 2;

    /*
     * b) Explique o que uma string e como ela é tratada em C.
     * Uma string é uma sequencia de caracteres, utilizado para representar palavras, frases ou textos. Na linguagem C
     * não existe um tipo de dado chamado do tipo string, como uma string é uma sequencia de caracteres representamos ela como um vetor
     * de caracteres na linguagem C, sendo declarada como 'char*'. Na linguagem C temos uma biblioteca chamada string.h que possui
     * funções para manipularmos uma string.
     */

    // Declaração de um vetor de caracteres ou string
    char* endereco = "Rua das Flores";

    printf("%s\n", endereco);

    // Exemplo da função strcat da biblioteca string.h
    char* texto1 = "Flores";
    char texto2[20] = "Girassois";

    strcat(texto2, texto1);

    printf("%s\n", texto2);
}
