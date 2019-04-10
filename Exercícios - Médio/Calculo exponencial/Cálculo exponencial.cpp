#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float X, N, Res;
	printf("Cálculo matemático.");
	printf("\nDigite um valor para X:");
		scanf("%f",&X);
	printf("Digite um valor para N:");
		scanf("%f",&N);
		
	Res = pow((X * N),2);
	printf("O resultado desse cálculo é: %.2f", Res);
	
	return 0;
}
