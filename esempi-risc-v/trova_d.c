#include <stdio.h>

/*
int trova_elemento(int A[], int n, int v) {
  for(int i = 0; i < n; i++) {
    if (A[i]== v) return i;
  }
  return -1;
}
*/

int trova_elemento(int A[], int s, int v);

int main() {
  int A[6] = {10, 3, 2, 4, 1, 22};
  int i = 0;
  /*
   * A[0] = 10;
   * A[1] = 3;
   * ...
   */
  for(int j = 0; j < 6; j++) printf("A[%d] = %d\n", j, A[j]);

  printf("cerca 2\n");
  i = trova_elemento(A, 6, 2);
  printf("indice = %d\n", i);
  printf("cerca 5\n");
  i = trova_elemento(A, 6, 5);
  printf("indice = %d\n", i);
  printf("cerca 4\n");
  i = trova_elemento(A, 6, 4);
  printf("indice = %d\n", i);
}
