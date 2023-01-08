#include <stdio.h>

/*
void bubblesort(int array[], int n) {
  int c, d, swap;

  for (c = 0 ; c < n - 1; c++) {
    for (d = 0 ; d < n - c - 1; d++) {
      // Ordinamento crescente. Usare < se ordine decrescente
      if (array[d] > array[d+1]) {
	swap       = array[d];
	array[d]   = array[d+1];
	array[d+1] = swap;
      }
    }
  }
}
*/

void bubblesort(int A[], int s);

int main() {
  int A[5] = {10, 3, 2, 1, 4};
  /*
   * A[0] = 10;
   * A[1] = 3;
   * ...
   * A[4] = 4;
   */
  printf("Prima\n");
  for(int j = 0; j < 5; j++) printf("A[%d] = %d\n", j, A[j]);

  bubblesort(A, 5);

  printf("Dopo\n");
  for(int j = 0; j < 5; j++) printf("A[%d] = %d\n", j, A[j]);
}
