#include <stdio.h>

int busca_binaria(int vetor[], int n, int valor) {
    int inicio = 0;
    int fim = n - 1;
    int meio;
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (vetor[meio] == valor) {
            return meio;
        }
        if (vetor[meio] > valor) {
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
    }
    return -1;
}

int main() {
    int v[6] = {10, 20, 30, 40, 50, 60};
    int p = busca_binaria(v, 6, 20);
    printf("%d\n", p);
    return 0;
}