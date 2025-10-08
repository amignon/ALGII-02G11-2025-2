#include <stdio.h>
#include <string.h>
#define TAM (10)

typedef struct {
    int codigo;
    char nome[100];
    int idade;
    int gravidade;
} Paciente;

void imprimePacientes(Paciente pacientes[], int n) {
    printf("### Lista de Pacientes ###\n");
    for (int i = 0; i < TAM; i++) {
        printf("%02d | %-30s | %2d | %3d\n", 
            pacientes[i].codigo, pacientes[i].nome, pacientes[i].idade,
            pacientes[i].gravidade);
    }
}

// implementa o bubble sort
void ordenaPorGravidade(Paciente pacientes[], int n) {
    Paciente temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (pacientes[j].gravidade < pacientes[j+1].gravidade) {
                temp = pacientes[j];
                pacientes[j] = pacientes[j+1];
                pacientes[j+1] = temp;
            }
        }
    }
}


int main() {
    Paciente pacientes[TAM] = {
        {101, "Ana Paula", 45, 85},
        {102, "Carlos Eduardo", 60, 92},
        {103, "Fernanda Lima", 33, 76},
        {104, "Joao Marcos", 70, 98},
        {105, "Luciana Alves", 55, 88},
        {106, "Bruno Rocha", 40, 69},
        {107, "Marta Silva", 28, 58},
        {108, "Rafael Tavares", 38, 73},
        {109, "Juliana Costa", 49, 91},
        {110, "Roberto Teixeira", 65, 94}
    };
    ordenaPorGravidade(pacientes, TAM);
    imprimePacientes(pacientes, TAM);

    /*
    for (int i = 0; i < TAM; i++) {
        printf("### Paciente #%02d ###\n", i);
        printf("\tCodigo: ");
        scanf("%d", &pacientes[i].codigo);
        getchar();
        printf("\tNome: ");
        fgets(pacientes[i].nome, sizeof(pacientes[i].nome), stdin);
        pacientes[i].nome[strcspn(pacientes[i].nome, "\n")] = 0;
        printf("\tIdade: ");
        scanf("%d", &pacientes[i].idade);
        printf("\tGravidade: ");
        scanf("%d", &pacientes[i].gravidade);
    }
    */
    

    return 0;
}