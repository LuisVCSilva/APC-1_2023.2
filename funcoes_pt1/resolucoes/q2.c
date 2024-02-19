#include <stdio.h>

int conta (int x) {
return x==0 ? 0 : x+conta(x-1);
}

int main () {
printf("%d\n",conta(100));
}

