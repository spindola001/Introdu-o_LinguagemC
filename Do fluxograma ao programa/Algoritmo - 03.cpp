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
		
	printf("Elevando um n�mero ao quadrado\n");
	printf("Digite um valor: ");
		scanf("%d",&a);
	
	//Efetua o c�lculo e devolve o resultado ao usu�rio.  
	quadrado = pow(a,2);
	
	printf("O n�mero %d elevado ao quadrado �: %d", a, quadrado);
	
	return 0;
}
