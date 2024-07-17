#include <stdio.h>

int main(void) {
  float dist, gas_total, gas_avg;

  printf("distance in Km:\n>: ");
  scanf("%f", &dist);

  printf("total gas in L:\n>: ");
  scanf("%f", &gas_total);

  gas_avg = dist/gas_total;
  printf("\navarage gas: %.3f Km/L", gas_avg);
  
  return 0;
}