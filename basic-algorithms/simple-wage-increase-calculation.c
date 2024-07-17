#include <stdio.h>

int main(void) {
  float wage;
  
  do {
    printf("Insira o salario:\n>: ");
    scanf("%f", &wage);

    if (wage >= 0) {
      if (wage <= 1000) {
        printf("novo salario: %.2f", wage + (wage * .15));
      } else if (wage > 1000 && wage < 2000) {
        printf("novo salario: %.2f", wage + (wage * .1));
      } else {
        printf("novo salario: %.2f", wage + (wage * .05));
      } 
    } else {
      printf("\nInsira um valor positivo!\n\n");
    }
  } while(wage < 0);
  
  return 0;
}