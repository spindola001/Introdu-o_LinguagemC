#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
/*
O programa a seguir recebe do usu�rio os valores A, B, C e calcula
a equa��o com base na f�rmula de baskara.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, X1, X2;
	
	printf("Equa��o de 2 grau.");
	printf("\nDigite um valor para A:");
		scanf("%f",&A);
	printf("\nDigite um valor para B:");
		scanf("%f",&B);
	printf("\nDigite um valor para C:");
		scanf("%f",&C);
	
	//Executa o c�lculo e devolve o resultado ao usu�rio.	
	X1 = (-B + sqrt((pow (B,2) -4 * A * C))) / 2 * A;
	X2 = (-B - sqrt((pow (B,2) -4 * A * C))) / 2 * A;
	
	printf("\nO valor de X1 �: %.4f", X1);
	printf("\nO valor de X2 �: %.4f", X2);
	
	return 0;
}
