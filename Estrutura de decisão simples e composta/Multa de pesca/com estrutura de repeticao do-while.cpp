#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float pesoDaPesca, Multa;
	int i, nroPescadores;
	
	i=1;
	nroPescadores=5;
	
	printf("Multa de pesca\n\n");
	
	do{
		
		printf("Informações do %dº pescador:\n\n", i);
		printf("Digite o peso da pesca: ");
			scanf("%f",&pesoDaPesca);
			
		Multa = (pesoDaPesca - 50) * 4;
		
		if(pesoDaPesca > 50){
			printf("Você ultrpassou o limite de pesca por pessoa!\n");
			printf("Sua multa é no valor de: R$ %.2f\n\n", Multa);
		}
		else{
			printf("Sua pesca está dentro do limite.\n\n");
		} 
	
	i++;	
	}while(i<=nroPescadores);

	system("pause");

	return 0;
	
}
