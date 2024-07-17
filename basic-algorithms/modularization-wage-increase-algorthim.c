#include <stdio.h>

float new(float actual, int perc_to);

int main(void) { 
  float new_wage, actual;
  int perc_to;

  do {
    printf("Insira o salario atual: \n>: ");
    scanf("%f", &actual);
    
    if (actual >= 0) {
      if (actual <= 1000) {
        perc_to = 15;
      } else if (actual > 1000 && actual < 2000) {
        perc_to = 10;
      } else {
        perc_to = 5;
      } 
    } else {
      printf("\nInsira um valor positivo!\n\n");
    }
  } while (actual < 0);
  
  new_wage = new(actual, perc_to);
  printf("\n\nNovo salario: %.2f", new_wage);
  
  return 0; 
}

float new_wage_calc(float actual, int perc_to) {
  float new_wage, incr;
  
  printf("\nSalario atual: %2.f\nPercentual de aumento: %d", actual, perc_to);
  
  incr =  actual * (perc_to/100.0);
  printf("\nAumento salarial: %.2f", incr);
  
  new_wage = actual + incr;
    
  return new_wage;
}