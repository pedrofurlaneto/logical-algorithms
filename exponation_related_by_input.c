#include <stdio.h>
#include <math.h>

int main(void) {
  double value;
  
  printf("insira x:\n>: ");
  scanf("%lf", &value);

  for (double i = 0; i <= 10; i++) {
    printf("\n%lf^%2.lf: %.2lf ", value, i, pow(value, i));
  }

  printf("\n");
  
  for (double i = 0; i <= value; i++) {
    printf("\n10^%2.lf: %.2lf", i, pow(10, i));
  }
  return 0;
}