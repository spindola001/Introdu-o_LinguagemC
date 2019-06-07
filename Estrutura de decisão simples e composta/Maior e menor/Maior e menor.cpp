#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float Num1, Num2;
	
	printf("Maior e menor\n\n");
	printf("Digite um número: ");
		scanf("%f",&Num1);
	printf("Digite outro número: ");
		scanf("%f",&Num2);
		
	if(Num1 > Num2){
		printf("O número %.1f é maior que %.1f.", Num1, Num2);
	}
	if(Num1 < Num2){
		printf("O número %.1f é maior que %.1f.", Num2, Num1);
	}
	if (Num1 == Num2){
		printf("Os números informados são iguais.");
	}
	
	return 0;
}
