#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
/*
O programa a seguir recebe do usuário os valores A, B, C e calcula
a equação com base na fórmula de baskara.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, X1, X2, Delta;
	
	printf("Equação de 2 grau.");
	printf("\nDigite um valor para A:");
		scanf("%f",&A);
	printf("\nDigite um valor para B:");
		scanf("%f",&B);
	printf("\nDigite um valor para C:");
		scanf("%f",&C);
	
	//Executa o cálculo e devolve o resultado ao usuário.	
	Delta = pow (B,2) -4 * A * C;
	X1 = -B + sqrt(Delta) / 2 * A;
	X2 = -B - sqrt(Delta) / 2 * A;
	
	if(Delta >= 0){
		printf("\nO valor de X1 é: %.4f", X1);
		printf("\nO valor de X2 é: %.4f", X2);		
	}
	else{
		printf("\n\nOs valores informados são inválidos...");
	}

	
	return 0;
}
