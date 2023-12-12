#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
srand(time(NULL));
printf("Numero aleatorio entre 0 e 9: %d\n", rand()%10);
}
