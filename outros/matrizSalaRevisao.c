#include <stdio.h>

/*
Resolução do exercício de revisão de matrizes realizado em sala de aula.
*/

int main () {
int m[3][3];
for(int i=0;i<3;i++) {//Letra A -- Leitura da matriz
	for(int j=0;j<3;j++) {
	printf("Entre com o elemento (%d,%d)\n",i+1,j+1);
	scanf("%d",&m[i][j]);
	}
}

for(int i=0;i<3;i++) {//Letra B -- Impressao da matriz
	for(int j=0;j<3;j++) {
	printf(" %d ",m[i][j]);
	}
	printf("\n");
}

int ehIdentidade = 1;
for(int i=0;i<3 && ehIdentidade==1;i++) {
	for(int j=0;j<3 && ehIdentidade==1;j++) {
	ehIdentidade = i==j ? m[i][i]==1 : m[i][j]==0;
	}
}
printf(ehIdentidade ? "A matriz eh identidade\n" : "A matriz nao eh identidade\n");

int ehDiagonal = 1;
for(int i=0;i<3 && ehDiagonal==1;i++) {
	for(int j=0;j<3 && ehDiagonal==1;j++) {
	ehDiagonal = i!=j ? m[i][j]==0 : ehDiagonal;
	}
}
printf(ehDiagonal ? "A matriz eh ehDiagonal\n" : "A matriz nao eh ehDiagonal\n");


int det = 0;

if(ehDiagonal) {
det = m[0][0]*m[1][1]*m[2][2];
/*det = 1;
for (int i=0;i<3;i++) {
det = det*m[i][i]
}*/
}
else
{
int p1 = (m[0][0]*m[1][1]*m[2][2])+(m[0][1]*m[1][2]*m[2][0])+(m[0][2]*m[1][0]*m[2][1]);
int p2 = (m[0][2]*m[1][1]*m[2][0])+(m[0][0]*m[1][2]*m[2][1])+(m[0][1]*m[1][0]*m[2][2]);
det = p1-p2;
}

printf("\nO determinante eh: %d\n",det);


return 0;
}
