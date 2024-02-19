#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool jogodosdoces(int n) {
	if (n == 42)
		return true;

	if (n < 42)
		return false;

	if (n % 2 == 0 && jogodosdoces(n / 2))
		return true;

	if (((n % 3 == 0) || (n % 4 == 0)) && (n%10 * n/10)!=0 && jogodosdoces(n - (n%10 * n/10)))
		return true;

	if (n % 5 == 0 && jogodosdoces(n - 42))
		return true;
	
	return false;
}

int main() {
	int n;
	scanf("%d", &n);
	if (jogodosdoces(n))
		printf("Ganha o jogo\n");
	else
		printf("Perde o jogo\n");
	return 0;
}
