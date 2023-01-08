#include <stdio.h>

/*
int calcola_media(int A[], int n) {
  int media = 0;
  for(int i = 0; i < n; i++) {
    media = media + A[i];
  }
  return media / n;
}
*/

int calcola_media(int A[], int s);

int main() {
  int A[5] = {10, 3, 2, 1, 4};
  int media = 0;
  /*
   * A[0] = 10;
   * A[1] = 3;
   * ...
   * A[4] = 4;
   */
  for(int j = 0; j < 5; j++) printf("A[%d] = %d\n", j, A[j]);

  media = calcola_media(A, 5);
  printf("media = %d\n", media);
}
