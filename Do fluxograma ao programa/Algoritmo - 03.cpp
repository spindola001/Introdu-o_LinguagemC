#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*
O programa a seguir eleva um valor ao quadrado.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, quadrado;
		
	printf("Elevando um número ao quadrado\n");
	printf("Digite um valor: ");
		scanf("%d",&a);
	
	//Efetua o cálculo e devolve o resultado ao usuário.  
	quadrado = pow(a,2);
	
	printf("O número %d elevado ao quadrado é: %d", a, quadrado);
	
	return 0;
}
