/** Jogo de Pedra, Papel e Tesoura */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    int computador = (rand() % 3) + 1;
    int usuario;
    printf("Selecione (1 - Pedra | 2 - Papel | 3 - Tesoura): ");
    scanf("%d", &usuario);
    printf("Computador: %d\n", computador);
    if (usuario == 1 && computador == 3) {
        printf("Usuário venceu!\n");
    }
    else if (usuario == 3 && computador == 2) {
        printf("Usuário venceu!\n");
    }
    else if (usuario == 2 && computador == 1) {
        printf("Usuário venceu!\n");
    }
    else if (usuario == computador) {
        printf("Empate\n");
    }
    else {
        printf("Computador venceu!\n");
    }
    return 0;
}