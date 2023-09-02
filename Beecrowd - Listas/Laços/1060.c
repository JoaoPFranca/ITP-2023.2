// Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

// Entrada
// Seis valores, negativos e/ou positivos.

// Saída
// Imprima uma mensagem dizendo quantos valores positivos foram lidos.
#include <stdio.h>

int main() {
  int i;
  int positivo = 0;
  float valor;

  for (i = 1; i <= 6; i++) {
    scanf("%f", &valor);
    if (valor > 0) {
      positivo++;
    }
  }

  printf("%d valores positivos\n", positivo);
  
  return 0;
}