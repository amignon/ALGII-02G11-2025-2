#include <stdio.h>

typedef struct {
  double peso;
  double altura;
} Pessoa;

double calculaIMC(Pessoa p) {
  double imc = p.peso / (p.altura * p.altura);
  return imc;
}


int main() {
  Pessoa umaPessoa;
  printf("Peso: ");
  scanf("%lf", &umaPessoa.peso);
  printf("Altura: ");
  scanf("%lf", &umaPessoa.altura);
  double imc = calculaIMC(umaPessoa);
  printf("IMC: %.1f\n", imc);
  return 0;
}