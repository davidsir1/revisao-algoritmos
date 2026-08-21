#include <stdio.h>

int main() {
    int y = 5;
    int z = 11;
    int w;
    w = y + z;
    if (y > z) {
        w = y * z;
    }

    printf("%d", w);

    /*
    * Saída do código: 16
    *
    * O valor de 'w' após a execução é 16
    */

    return 0;
}
