#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float Num1, Num2;
	
	printf("Maior e menor\n\n");
	printf("Digite um n�mero: ");
		scanf("%f",&Num1);
	printf("Digite outro n�mero: ");
		scanf("%f",&Num2);
		
	if(Num1 > Num2){
		printf("O n�mero %.1f � maior que %.1f.", Num1, Num2);
	}
	if(Num1 < Num2){
		printf("O n�mero %.1f � maior que %.1f.", Num2, Num1);
	}
	if (Num1 == Num2){
		printf("Os n�meros informados s�o iguais.");
	}
	
	return 0;
}
