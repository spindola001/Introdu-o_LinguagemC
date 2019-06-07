#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int Num, Result;
	
	printf("Impar ou Par?\n\n");
	printf("Digite um número: ");
		scanf("%d",&Num);
	
	Result = Num % 2;
		
	if (Result == 0){
		printf("O número %d é par!", Num);
	} 
	else{
		printf("O número %d é impar", Num);
	}
	
	return 0;
}
