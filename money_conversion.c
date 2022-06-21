#include <stdio.h>

int main(void) {
  float real;

  do {
    printf("Insira a quantia em reais (R$)\n>: ");
    scanf("%f", &real);

    if (real < 0) printf("Insira um valor positivo!\n\n");
  } while (real < 0);

  printf("\nCOTACAO:\ndolar: %.2f $\nmarco alemao: %.2f DM\nlibra esterlina: %.2f £\n", real/1.8, real/2, real/3.57);
  
  return 0;
}

/*
  DECLARE real NUMÉRICO

  LER real
  MOSTRAR "dolar: ", real/1.8
  MOSTRAR "marco alemao :", real/2 
  MOSTRAR "libra esterlina: ", real/3.57
*/