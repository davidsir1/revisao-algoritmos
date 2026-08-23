#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
     * a) Qual o comportamento da função free?
     * a função free libera os blocos de memória dinâmica que foram alocados utilizando a função malloc() ou calloc().
     * Ele não apaga os dados, apenas libera aquele espaço para nova alocação.
     *
     * b) Após chamar free, o ponteiro pode ser utilizado?
     * Sim, pode ser utilizado. O free apenas libera o espaço para nova alocação
     *
     * c) O que causa vazamentos de memória?
     * Vazamento de memória ocorre quando tentamos armazenar ou alocar espaços na memória que não estão disponíveis.
     *
     * d) O que a instrução malloc retorna quando não consegue realizar a alocação?
     * Ele retorna NULL em caso de falha.
     *
     * e) Explique a instrução calloc.
     * Ele aloca dinamicamente um bloco de memória e inicializa todos os bytes alocados com o valor zero. Ela é útil quando
     * precisamos que os blocos de memória alocados sejam iniciados com zero sem a necessidade de varrer manualmente com um laço
     * de repetição.
     *
     * f) Qual a diferença entre as instruções malloc e calloc?
     * O malloc recebe apenas um argumento para o tamanho a ser alocado e não inicializa os elementos, a memória alocada contém
     * lixo da memória. Enquanto o calloc recebe dois argumentos, primeiro o tamanho a ser alocado e o tamanho em bytes e todos os
     * elementos são inicializados com zero.
     */


    // Exemplificando o enunciado b)
    int* numeros = (int*)malloc(sizeof(int)*8); // Alocando 8 espaços na memória

    for (int i = 0; i < 8; i++) {
        numeros[i] = i * 2;
    }

    for(int i = 0; i < 8; i++) {
        printf("%d ", numeros[i]);
    }

    free(numeros);

    numeros = (int*)malloc(sizeof(int)*4); // Alocando 4 espaços na memória

    printf("\n\n");

    for (int i = 0; i < 4; i++) {
        numeros[i] = i * 4;
    }

    for(int i = 0; i < 4; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n\n");

    free(numeros);
    numeros = NULL;

    // Exemplificando o enunciado e)
    int* numeros_pares = (int*)calloc(5, sizeof(int));

    if (numeros_pares == NULL) {
        printf("Erro: falha em alocar memória\n");
        return 1;
    }

    // O calloc zera a memória, todos os indices possuem valor zero (0)
    for (int i = 0; i < 5; i++) {
        printf("numeros_pares[%d] = %d\n", i, numeros_pares[i]);
    }

    free(numeros_pares);
    numeros_pares = NULL;


    return 0;
}
