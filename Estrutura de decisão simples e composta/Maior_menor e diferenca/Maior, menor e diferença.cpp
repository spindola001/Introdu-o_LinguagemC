#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int Num1, Num2, Dif;
	
	printf("A difern�a entre dois n�meros\n\n");
	printf("Digite um n�mero: ");
		scanf("%d",&Num1);
	printf("Digite outro n�mero: ");
		scanf("%d",&Num2);
		
	Dif = Num1 - Num2;
	
	if(Num1 > Num2){
		printf("O n�mero %d � maior do que %d.\n\n", Num1, Num2);
		printf("A diferen�a entre os dois n�meros �: %d", Dif);
	}
	if(Num1 < Num2){
		printf("O n�mero %d � maior do que %d.\n\n", Num1, Num2);
		printf("A diferen�a entre os dois n�meros �: %d", Dif);
	}
	if(Num1 == Num2){
		printf("Os n�meros informados s�o iguais.\n\n");
		printf("A diferen�a entre os dois n�meros �: %d", Dif);
	}
	
	return 0;
}
