#include <stdio.h>

int main (){
    int n = 10, i=n-1;
    for(;;){
        n*=i;
        i--;
        if (i==1)
            break;
    }
    printf("\n resultado = %d", n);
}
