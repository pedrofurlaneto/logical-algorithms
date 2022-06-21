#include <stdio.h>

int main(void) {
  int n1, n2;

  printf("Insira um valor inicial:\n>: ");
  scanf("%d", &n1);
  printf("\nInsira um valor limite:\n>: ");
  scanf("%d", &n2);
  
  for (int i = n1; i <= n2; i++) {
    for (int j = 1; j <= 10; j++) {
      printf("%d X %d = %d\n",i, j, i * j);
    }
    
    printf("\n\n");
  }
  return 0;
}