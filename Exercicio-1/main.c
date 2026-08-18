#include <stdio.h>

int main() {

    int a = 1, b = 2, c = 3, d = 4, e = 5;

    /*
    O printf exibe o resultado de (a * b / c) = 0.667, as variáveis declaradas são do tipo inteiro e
    é feito um "Type Casting", converte o tipo inteiro para float. Se não fizermos essa conversão, o
    resultado da operação será zero. O especificador "%.3f" exibe o formato tipo float e o ".3" vai exibir
    apenas 3 casas decimais (após a virgula).
    */
    printf("a * b / c = %.3f\n", (float)a * b / c);

    /*
    O printf exibe o resultado de (a * b % c + 1) = 3, aqui ele fará por ordem de prioridade dos operadores multiplicação e divisão,
    ou da esquerda para direita. O operador "%" é chamado de módulo e ele calcula o resto da divisão.
    */
    printf("a * b %% c + 1 = %d\n", a * b % c + 1);

    /*
    O printf exibe o resultado (++a * b - c--) = 1. O incremento feito na variável a (++a) está colocando antes da variável, ou seja,
    pré incremento, ele vai incrementar primeiro a variável e delvover o valor, a variável a = 1 será incrementada em +1, logo a = 2.
    O decremento feito na variável c (c--) é um pós decremento, não vai acontecer nada pois esse decremento ocorre depois.
    */
    printf("++a * b - c-- = %d\n", ++a * b - c--);

    /*
    O printf exibe o resultado (7 - - b * ++d) = 17. Nessa expressão, será aplicado a ordem de prioridade das operações, começando com (-b * ++d).
    Será feito o pré incremento da variável d, valor agora será 5, após isso será feito a multiplicação de (-2 * 5) = -10. Agora será calculado 7 - (-10) e
    de com a regra de menos com menos dá mais, a expressão será 7 + 10 = 17.
    */
    printf("7 - - b * ++d = %d\n", 7 - - b * ++d);

    /*
    O printf exibe o resultado de (a / b / c) = 0.500. A expressão é feita da esquerda para direita, começando (a / b), ou seja, 2 / 2 = 0,5 e esse resultado
    é dividido pelo valor da variável 'c' que é igual 2. Logo, (1 / 2) = 0,5. Nas operações anteriores foram feitos incremento e decremento e as variáveis 'a' e 'c'
    sofreram com isso. A variável 'a' antes tinha o valor 1, foi incrementado e seu valor é igual a 2, o mesmo ocorreu com a variável 'c' porém foi feito um pós decremento,
    seu valor que era 3, foi atribuido o valor 2.
    */
    printf("a / b / c = %.3f\n", (float)a / b / c);

    /*
    O printf exibe o resultado de (7 + c * --d / e) = 8.600. A expressão vai começar a partir da multiplicação de acordo com a ordem de prioridade das operações, começando
    em (c * --d). A variável 'c' sofreu alteração com decremento feito anteriormente, logo seu valor é igual a '2' e a variável 'd' sofre um pré-decremento, seu valor que
    era 5 será 4, o resultado da expressão (2 * 4) é 8. Após isso o valor 8 é divido por 5, logo 8 / 5 = 1,6. Por fim, o resultado da divisão é somado com o valor 7, 7 + 1,6 = 8,6.
    */
    printf("7 + c * --d / e = %.3f\n", 7 + c * --d / (float)e);

    /*
    O printf exibe o resultado de (2 * a % -b + c + 1) = 3. Será feito primeiro a operação (2 * a), pois segue a ordem de prioridade das operações, o valor atribuído a variável
    'a' é 2, logo o resultado da expressão é (2 * 2 = 4). Após isso é feito o calculo do resto de 4 % -2 que será 0, o restante da expressão é 2 + 1 = 3.
    */
    printf("2 * a %% - b + c + 1 = %d\n", 2 * a % - b + c + 1);

    /*
    O printf exibe o resultado (39 / - ++e - + 29 % c) = -7.500. Será feito primeiro as expressões (39 / - ++e) e (29 % c), a primeira expressão a variável 'e'
    é feito um pré-incremento, o valor da variável é 5 e passa a ser 6, resultando em (39 / -6) = 6,5. A segunda expressão é só calcular o resto, a variável 'c'
    tem o valor 2 e (29 % 2) = 1. Por fim, basta fazer 6,5 - + 1 = 6,5 - 1 = 7,5.
    */
    printf("39 / - ++e - + 29 %% c = %.3f\n", 39.0 / - ++e - + 29 % c);

    /*
    O printf exibe o resultado (7 - + ++a % (3+b)) = 4. Primeiro é feito a expressão dentro dos parentes (3+b), a variável 'b' tem o valor 2 e o resultado da expressão é
    3+2 = 5. Após isso é feito (++a % 5), a variável 'a' com valor 2 recebe +1 (pré-incrementada) e seu valor passa a ser 3, a expressão passa a ser 3 % 5 = 3.
    Por fim, é feito (7 - + 3) = 7 - 3 = 4.
    */
    printf("7 - + ++a %% (3+b) = %d\n", 7 - + ++a % (3+b));
    
    return 0;
}
