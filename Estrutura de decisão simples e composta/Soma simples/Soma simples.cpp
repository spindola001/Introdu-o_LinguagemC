#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float Num1, Num2, Result;
	
	printf("Soma simples\n\n");
	printf("Digite um n�mero: ");
		scanf("%f",&Num1);
	printf("Digite outro n�mero: ");
		scanf("%f",&Num2);
		
	Result = Num1 + Num2;
	
	if(Result > 25){
		printf("A somas dos n�meros � maior do que 25!");
	}
	
	return 0;
}
