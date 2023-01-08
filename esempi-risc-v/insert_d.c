#include <stdio.h>

/*
int insert_ordered(int A[], int n, int max, int v) {
  int i;
  if (n + 1 <= max) {
    for(i = 0; i < n ; i++) {
      if (A[i] > v) break;
    }
    for (int j = n-1; j >= i; j--) {
      A[j+1] = A[j];
    }
    A[i] = v;
    max = n+1;
  }
  return max;
}
*/
int insert_ordered(int A[], int n, int max, int v);

int main() {
  int A[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int s = 0;
  for(int i = 0; i < s; i++) printf("A[%d] = %d\n", i, A[i]);

  printf("Inserting 5\n");
  s = insert_ordered(A, s, 10, 5);
  printf("------------\n");
  for(int i = 0; i < s; i++) printf("A[%d] = %d\n", i, A[i]);

  printf("Inserting 1\n");
  s = insert_ordered(A, s, 10, 1);
  printf("------------\n");
  for(int i = 0; i < s; i++) printf("A[%d] = %d\n", i, A[i]);

  printf("Inserting 4\n");
  s = insert_ordered(A, s, 10, 4);
  printf("------------\n");
  for(int i = 0; i < s; i++) printf("A[%d] = %d\n", i, A[i]);

  printf("Inserting 2\n");
  s = insert_ordered(A, s, 10, 2);
  printf("------------\n");
  for(int i = 0; i < s; i++) printf("A[%d] = %d\n", i, A[i]);

  printf("Inserting 7\n");
  s = insert_ordered(A, s, 10, 7);
  printf("------------\n");
  for(int i = 0; i < s; i++) printf("A[%d] = %d\n", i, A[i]);

  printf("Inserting 2\n");
  s = insert_ordered(A, s, 10, 2);
  printf("Inserting 3\n");
  s = insert_ordered(A, s, 10, 3);
  printf("Inserting 3\n");
  s = insert_ordered(A, s, 10, 3);
  printf("Inserting 3\n");
  s = insert_ordered(A, s, 10, 3);
  printf("Inserting 3\n");
  s = insert_ordered(A, s, 10, 3);
  printf("Inserting 3\n");
  s = insert_ordered(A, s, 10, 3);
  printf("Inserting 3\n");
  s = insert_ordered(A, s, 10, 3);
  printf("Inserting 3\n");
  s = insert_ordered(A, s, 10, 3);
  printf("------------\n");
  for(int i = 0; i < s; i++) printf("A[%d] = %d\n", i, A[i]);
}
