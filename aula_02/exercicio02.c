#include <stdio.h>

int main() {
    double salario_bruto;
    printf("Salário Bruto: ");
    scanf("%lf", &salario_bruto);
    double imposto;
    if (salario_bruto <= 2000.00) {
        imposto = 0.0;
    }
    else if (salario_bruto <= 4000.00) {
        imposto = salario_bruto * 0.075;
    }
    else if (salario_bruto <= 6000.00) {
        imposto = salario_bruto * 0.15;
    }
    else if (salario_bruto <= 10000.00) {
        imposto = salario_bruto * 0.225;
    }
    else {
        imposto = salario_bruto * 0.275;
    }
    double salario_liquido = salario_bruto - imposto;
    printf("Imposto: %.2f\n", imposto);
    printf("Salario Liquido: %.2f\n", salario_liquido);
    return 0;
}