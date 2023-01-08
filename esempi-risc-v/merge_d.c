#include <stdio.h>

/*
int merge_array(int s1[], int n1, int s2[], int n2, int d[], int nd) {
  if (n1 + n2 <= nd) {
    int k = 0, i, j;
    for(i = 0, j = 0; i < n1 && j < n2; ) {
      if (s1[i] <= s2[j]) {
	d[k++] = s1[i++];
      } else {
	d[k++] = s2[j++];
      }
    }
    for ( ; i < n1; i++) d[k++] = s1[i];
    for ( ; j < n2; j++) d[k++] = s2[j];
    return k;
  }
  return -1;
}
*/


int merge_array(int s1[], int n1, int s2[], int n2, int d[], int nd);

int main() {
  int A[6] = {1, 2, 5, 9, 11, 12};
  int B[6] = {1, 4, 5, 6, 7, 10};
  int C[12];
  int i = 0;
  for(int j = 0; j < 6; j++) printf("A[%d] = %d\n", j, A[j]);
  for(int j = 0; j < 6; j++) printf("B[%d] = %d\n", j, B[j]);

  i = merge_array(A, 6, B, 6, C, 12);
  for(int j = 0; j < 12; j++) printf("C[%d] = %d\n", j, C[j]);
  printf("risultato = %d\n", i);

  i = merge_array(A, 6, B, 6, C, 9);
  printf("risultato = %d\n", i);
}
