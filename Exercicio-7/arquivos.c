#include <stdio.h>
#include <string.h>

int main() {
    /*
     * a) Explique os diferentes modos de abertura de arquivos
     * "rwa"
     * 'r': é o modo de leitura. esse modo apenas lê o arquivo
     * 'w': é o modo de escrita. esse modo pode criar um arquivo caso não exista ou sobrescrever o conteúdo dele
     * 'a': é o modo de acrescentar. esse modo pode criar um arquivo caso não exista ou acrescenta um conteúdo
     */

    /*
     *  b) Explique o funcionamento das funções fgets, fprintf, fread, fwrite
     *  O fgets é usado para ler uma linha de texto de um arquivo ou da entrada padrão do teclado e armazená-la em uma
     * string. Ela é útil para ler linhas completas de texto
     *  O fprintf é usado para escrever dados formatados em um arquivo em C
     *  O fread é usado para ler arquivo
     *  O fwrite é usado para escrever no arquivo
     */

    FILE* arquivo = fopen("arquivo.txt", "w"); // Escrita

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    const char* mensagem = "Olá! Tudo bem?\n";
    fwrite(mensagem, sizeof(char), strlen(mensagem), arquivo);

    fclose(arquivo);

    arquivo = fopen("arquivo.txt", "r"); // Leitura

    char linha[100];
    if (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}
