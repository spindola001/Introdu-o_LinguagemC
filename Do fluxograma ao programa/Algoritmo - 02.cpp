#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir efetua a soma de dois n�meros.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, soma;
	
	printf("Soma de dois n�meros\n");
	printf("Digite um valor: ");
		scanf("%d",&a);
	printf("Digite outro valor: ");
		scanf("%d",&b);
		
	//Efetua o c�lculo e devolve o resultado ao usu�rio.
	soma = a + b;
	
	printf("A soma de %d + %d �: %d", a, b, soma);
	
	return 0;
}
