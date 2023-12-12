#include <stdio.h>
#include <math.h>

int main (){
    int x, soma = 0;
    printf("Digite um numero um numero para verificar se e quadrado: ");
    scanf("%d",&x);
    int i = 0;
    for(i=1; soma<x; i++){
    printf("%d + ",2*i-1),
    soma += 2*i-1;
    }
    printf(soma==x ? " %d um quadrado perfeito na foma de x^2" : " %d nao eh um quadrado perfeito na foma de x^2",x);

}
