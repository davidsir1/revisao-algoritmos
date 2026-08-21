#include <stdio.h>

int main() {
    int a = 5;
    int b = 11;
    float c;

    scanf("%d %d", &a, &b);

    if (a > b || !(a > 0)) {
        c = (float)(b / a);
    } else {
        c = (float)(a / b);
    }

    printf("%.2f\n", c);

    /*
     * Primeiro teste: a = 5; b = 15
     * Saída do código:
     * 0.00
     *
     * Explicação: Utilizando os mesmo valores declarados nas variáveis, a estrutura de condição 'if' da falso em ambas
     * condições (5 > 11) e !(5 > 0), executando o código do 'else' c = (float)(a / b). O resultado obtido com a divisão
     * deu 0.00 por conta dos parenteses e as variaveis são do tipo inteiro, ele faz primeiro o calculo da divisão e depois
     * é feito a conversão do resultado em float
     *
     * Segundo teste: a = 15 e b = 6
     * Saída do código:
     * 0.00
     *
     * Explicação: mudando os valores da variável para dar verdadeiro a condição (a > b) ocorre o mesmo do primeiro teste,
     * é feito o calculo dentro dos parentes primeiro e depois feito a conversão.
     */

    return 0;
}
