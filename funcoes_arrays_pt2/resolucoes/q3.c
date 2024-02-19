#include<stdio.h>

int max(int x, int y) {
  return x > y ? x : y;
}

int min(int x, int y) {
  return x < y ? x : y;
}

int melhorTrade(int precos[], int n) {
  int melhorTrade = 0, menorPreco = precos[0];

  for (int i = 1; i < n; i++) {
    if (precos[i] > precos[i - 1]) {
      melhorTrade = max(melhorTrade, precos[i] - menorPreco);
    } else {
      menorPreco = min(menorPreco, precos[i]);
    }
  }
  return melhorTrade;
}

int main() {
  int n;
  scanf("%d\n", & n);
  int precos[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", & precos[i]);
  }
  printf("%d", melhorTrade(precos, n));
  return 0;
}
