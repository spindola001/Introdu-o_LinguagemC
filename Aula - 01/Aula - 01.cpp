#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR FA");
	int N1, N2, Res;
	printf("\n\t\aC�lculo para a soma de dois n�meros.\n\n");
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&N1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&N2);
	Res=N1+N2;
	printf("O resultado da some �: %d", Res);
	return 0;
}
