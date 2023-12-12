#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; i++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
