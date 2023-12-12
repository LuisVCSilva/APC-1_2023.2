#include <stdio.h>

int main() {
int numeroUsuario;
printf("Informe um número para a tabuada: ");
scanf("%d", &numeroUsuario);

printf("Tabuada de %d:\n", numeroUsuario);
for (int i = 0; i <= 10; ++i) {
printf("%d x %d = %d\n", numeroUsuario, i, numeroUsuario * i);
}

return 0;
}
