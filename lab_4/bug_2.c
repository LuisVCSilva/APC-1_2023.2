#include <stdio.h>

int main() {
    int i = 1, j = 1;

    while (i <= 3) {
        while (j <= 3) {
            printf("%d ", i * j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
