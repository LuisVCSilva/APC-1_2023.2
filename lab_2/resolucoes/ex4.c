#include <stdio.h>
int main () {
int opcao_usuario = 0;
printf("Entre com a opcao: \n");
printf("1 >> Portugues\n");
printf("2 >> Ingles\n");
printf("3 >> Espanhol\n");
scanf("%d", &opcao_usuario);
int resultado =0;
if(opcao_usuario==1){
printf("Olá mundo");
}
if(opcao_usuario==2){
printf("Hello world");
}
if(opcao_usuario==3){
printf("hola mundo");
}
default:
printf("Entrada incorreta");//correcao posterior
printf("\n")
}
