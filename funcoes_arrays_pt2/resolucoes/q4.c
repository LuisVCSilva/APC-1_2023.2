#include <stdio.h>
#include <stdlib.h>
#define TAM 50

int main() {
  int N, i, j, A[TAM][TAM], temp;
  scanf("%d", & N);

  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      scanf("%d", & A[i][j]);

  for (i = 0; i < N; i++) {
    for (j = i; j < N; j++) {
      temp = A[i][j];
      A[i][j] = A[j][i];
      A[j][i] = temp;
    }
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j < N / 2; j++) {
      temp = A[i][j];
      A[i][j] = A[i][N - j - 1];
      A[i][N - j - 1] = temp;
    }
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;
}
