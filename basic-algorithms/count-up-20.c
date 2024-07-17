#include <stdio.h>

int main(void) {
  int count = 1;

  printf("Increased\n");
  while (count <= 20) {
    printf("%d ", count);
    count++;
  }

  printf("\n\nDecreased\n");
  count = 20;
  while (count >= 1) {
    printf("%d ", count);
    count--;
  }

  printf("\n\nOnly pairs\n");
  count = 1;
  while(count <= 20) {
    if (count % 2 == 0) {
      printf("%d ", count);
    }

    count++;
  }
  return 0;
}