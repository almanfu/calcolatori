#include <stdio.h>

void nome_func(int A[], int s);

int main() {
  int A[5] = {10, 3, 2, 1, 4};
  /*
   * A[0] = 10;
   * A[1] = 3;
   * ...
   * A[4] = 4;
   */
  for(int j = 0; j < 5; j++) printf("A[%d] = %d\n", j, A[j]);

  nome_func(A, 5);

  for(int j = 0; j < 5; j++) printf("A[%d] = %d\n", j, A[j]);
}
