#include <stdio.h> // funções de entrada e saída de dados

int main() {
    int i;

    i = 0;

    // while verifica primeiro, depois executa
    while (i < 10) {
        printf("while: %d\n", i);
        i++;
    }

    // do executa, depois verifica
    i = 0;
    do {
        printf("do: %d\n", i);
        i++;
    } while(i < 10);

    /*
     * a)
     * Saída do programa:
     while: 0
     while: 1
     while: 2
     while: 3
     while: 4
     while: 5
     while: 6
     while: 7
     while: 8
     while: 9
     do: 0
     do: 1
     do: 2
     do: 3
     do: 4
     do: 5
     do: 6
     do: 7
     do: 8
     do: 9
     */

    /*
     * b) Qual a diferença entre o while e do do...while?
     * O while primeiro verifica a condição antes de executar o bloco de código, o do..while executa primeiro o bloco
     * de código e depois o while faz verificação da condição.
     */

    /*
     * c) Como fica a implementação do bloco
     * Não entendi essa pergunta.
     */

    /*
     * d) Qual a diferença entre while e for? Quando usar um ou outro?
     * O while realiza a execução de um bloco de código se a condição for verdadeira, enquanto o for é utilizado quando
     * queremos repetir um bloco de código em uma quantidade de vezes.
     *
     * O while é usado quando não sabemos quantas vezes é executado um bloco de código e o for é utilizado quando
     * sabemos quantas vezes um bloco de código é executado.
     */

    return 0;
}
