#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int Num1, Num2, Dif;
	
	printf("A difernça entre dois números\n\n");
	printf("Digite um número: ");
		scanf("%d",&Num1);
	printf("Digite outro número: ");
		scanf("%d",&Num2);
		
	Dif = Num1 - Num2;
	
	if(Num1 > Num2){
		printf("O número %d é maior do que %d.\n\n", Num1, Num2);
		printf("A diferença entre os dois números é: %d", Dif);
	}
	if(Num1 < Num2){
		printf("O número %d é maior do que %d.\n\n", Num1, Num2);
		printf("A diferença entre os dois números é: %d", Dif);
	}
	if(Num1 == Num2){
		printf("Os números informados são iguais.\n\n");
		printf("A diferença entre os dois números é: %d", Dif);
	}
	
	return 0;
}
