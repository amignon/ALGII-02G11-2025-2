#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *file;

    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    int tamanho;
    int valor;
    fscanf(file, "%d", &tamanho);
    for (int i = 0; i < tamanho; i++) {
        fscanf(file, "%d", &valor);
        printf("%d\n", valor);
    }
    fclose(file);
    return 0;
}