#include <stdio.h>
#include <stdlib.h>

int matrix_setup(int matrix);

int main(void) {
  int base[3], matrix_M[2][2], matrix_R[2][2], highest;
  time_t t;

  // rand setup
  srand((unsigned) time(&t));

  // matrix_m setup
  printf("Matrix M -\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      int curr = rand() % 50;

      // get highest number
      if (i == 0 && j == 0) {
        highest = curr;
      } else {
        if (curr > highest) {
          highest = curr;
        }
      }

      // generate the matrix
      matrix_M[i][j] = curr;
      
      printf("%d ", matrix_M[i][j]);
    }
    printf("\n");
  }

  printf("\n\nMatrix R -\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      int curr = matrix_M[i][j] * highest;
      
      matrix_R[i][j] = curr;
      printf("%d ", matrix_R[i][j]);
    }
    printf("\n");
  }

  return 0;
}