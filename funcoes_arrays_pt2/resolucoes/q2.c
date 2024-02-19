#include <stdio.h>

int min(int x, int y) {
  return x < y ? x : y;
}

int f(int nLinhas, int A[nLinhas][nLinhas]) {
  int i, j, caminho[nLinhas];

  i = nLinhas - 1;
  for (j = 0; j < nLinhas; j++) {
    caminho[j] = A[i][j];
  }

  for (i = nLinhas - 2; i >= 0; i--) {
    for (j = 0; j < i + 1; j++) {
      caminho[j] = A[i][j] + min(caminho[j], caminho[j + 1]);
    }
  }
  return caminho[0];
}

int main() {
  int i, j, nLinhas, triangulo[nLinhas][nLinhas];
  scanf("%d", & nLinhas);
  for (i = 0; i < nLinhas; i++) {
    for (j = 0; j <= i; j++) {
      scanf("%d", & triangulo[i][j]);
    }
  }

  printf("%d\n", f(nLinhas, triangulo));
}
