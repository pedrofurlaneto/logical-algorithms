#include <stdio.h>

int main(void) {
  int n;
  
  do {
    printf("Insira um valor:\n>: ");
    scanf("%d", &n);
    
    if (n < 2) printf("\nInsira um valor maior ou igual a 2\n");  
  } while (n < 2);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    
    printf("\n");
  }
  return 0;
}