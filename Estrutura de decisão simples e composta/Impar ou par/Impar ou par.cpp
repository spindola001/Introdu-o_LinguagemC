#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int Num, Result;
	
	printf("Impar ou Par?\n\n");
	printf("Digite um n�mero: ");
		scanf("%d",&Num);
	
	Result = Num % 2;
		
	if (Result == 0){
		printf("O n�mero %d � par!", Num);
	} 
	else{
		printf("O n�mero %d � impar", Num);
	}
	
	return 0;
}
