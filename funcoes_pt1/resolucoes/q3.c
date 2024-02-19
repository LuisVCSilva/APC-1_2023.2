#include <stdio.h>

int fatorial (int x) {
return x==0 ? 1 : x*fatorial(x-1);
}

int main () {
printf("%d\n",fatorial(5));
}

