#include <stdio.h>
#include <stdlib.h>

#define TAM 50

int main() {
	int N, M, k, i, j, A[TAM][TAM];
	scanf("%d %d", &M, &N);

	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &A[i][j]);


	for (k = 0; k < M; k++) {
		i = k; j = 0;
		while (i >= 0 && j < N) {
			printf("%d ", A[i][j]);
			i--; j++;
		}
		printf("\n");
	}

	for (k = 1; k < N; k++) {
		i = M-1; j = k;
		while (j < N && i >= 0) {
			printf("%d ", A[i][j]);
			i--; j++;
		}
		printf("\n");
	}

	return 0;
}
