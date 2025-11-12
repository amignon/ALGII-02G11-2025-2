#include <stdio.h>

int soma_digitos(int n) {
    if (n < 10) {
        return n;
    }
    return soma_digitos(n / 10) + (n % 10);
}

int main() {
    int soma = soma_digitos(253);
    printf("Soma: %d\n", soma);
    return 0;
}