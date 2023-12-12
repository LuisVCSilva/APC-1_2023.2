#include<stdio.h>
//imprime_crescente

int main() {


    int n1, n2, n3;


    printf("Digite três numeros:\n");

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);


    if(n1 <= n2 && n1 <= n3) {
        if(n2 <= n3) {
            printf("%d %d %d \n", n1, n2, n3);
        }else {
            printf("%d %d %d \n", n1, n3, n2);
        }

    }else if(n2 <= n1 && n2 <= n3) {
        if(n1 <= n3) {
            printf("%d %d %d \n", n2, n1, n3);
        }else {
            printf("%d %d %d \n", n2, n3, n1);
        }

    }else {
        if(n1 <= n2){
            printf("%d %d %d \n", n3, n1, n2);
        }else {
            printf("%d %d %d \n", n3, n2, n1);
        }
    }

    return 0;

}
