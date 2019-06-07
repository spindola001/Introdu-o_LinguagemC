#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float pesoDaPesca, Multa;
	
	printf("Multa de pesca\n\n");
	printf("Digite o peso da pesca: ");
		scanf("%f",&pesoDaPesca);
		
	Multa = (pesoDaPesca - 50) * 4;
	
	if(pesoDaPesca > 50){
		printf("Você ultrpassou o limite de pesca por pessoa!\n");
		printf("Sua multa é no valor de: R$ %.2f", Multa);
	}
	else{
		printf("Sua pesca está dentro do limite.");
	} 
	
	return 0;
	
}
