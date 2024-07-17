#include <stdio.h>

int main(void) {
  int v0, v1 = -1;
  
  do {
    printf("Insira um valor:\n>: ");
    scanf("%d", &v0);

    if(v0 < 0) break;

    if (v1 == -1) {
      v1 = v0;
    } else {
      if (v0 < v1) {
        v1 = v0;
      } 
    }
  } while (v0 >= 0);

  printf("\n\nMenor valor encontrado: %d", v1);
  return 0;
}