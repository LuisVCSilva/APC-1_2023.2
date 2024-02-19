#include <stdio.h>

int conta (int x) {
printf("%d, ",x);
return x>=100 ? 0 : conta(x+1);
}

int main () {
conta(1);
}
