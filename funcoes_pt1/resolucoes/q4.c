#include <stdio.h>

int f(int a,int b) {
return b==0 ? 1 : a*f(a,b-1);
}


int main () {
printf("%d\n",f(3,3));
return 0;
}
