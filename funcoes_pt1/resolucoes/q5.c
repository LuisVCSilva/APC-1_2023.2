#include <stdio.h>

int somaDigitos(int n) {
return n<10 ? n : n % 10 + somaDigitos(n / 10);
}

int main() {
    int n = 2517;
    int soma = somaDigitos(n);
    printf("Soma dos digitos %d eh %d\n", n, soma);
    return 0;
}
