#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, X1, X2;
	
	printf("Equação de 2 grau.");
	printf("\nDigite um valor para A:");
		scanf("%f",&A);
	printf("\nDigite um valor para B:");
		scanf("%f",&B);
	printf("\nDigite um valor para C:");
		scanf("%f",&C);
		
	X1 = (-B + sqrt (pow (B,2) -4 * A * C)) / 2 * A;
	X2 = (-B - sqrt (pow (B,2) -4 * A * C)) / 2 * A;
	
	printf("\nO valor de X1 é: %.2f", X1);
	printf("\nO valor de X2 é: %.2f", X2);
	
	return 0;
}
