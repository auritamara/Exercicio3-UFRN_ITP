#include <stdio.h>

int main(void) {
  char letra[] = "";
  int populariedade = 0;
  float pontos = 0.0;
  float resultado = 0.0;
  scanf ("%s", letra);
  scanf ("%i", &populariedade);
  scanf ("%f", &pontos);
  resultado = populariedade * pontos;
  printf("A popularidade de %s é %.1f", letra, resultado);
  return 0;
}