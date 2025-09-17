#include <stdio.h>

int main() {
    char nome_completo[50];
    fgets(nome_completo, 50, stdin);
    printf("%s\n", nome_completo);
    return 0;
}