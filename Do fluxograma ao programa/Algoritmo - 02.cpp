#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir efetua a soma de dois números.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, soma;
	
	printf("Soma de dois números\n");
	printf("Digite um valor: ");
		scanf("%d",&a);
	printf("Digite outro valor: ");
		scanf("%d",&b);
		
	//Efetua o cálculo e devolve o resultado ao usuário.
	soma = a + b;
	
	printf("A soma de %d + %d é: %d", a, b, soma);
	
	return 0;
}
