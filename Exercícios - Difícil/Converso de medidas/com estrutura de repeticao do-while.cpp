#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

/*
O programa a seguir recebe um valor em centímetro e o converte para metros, decimetros e milimetros.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Centimetros, Metros, Decimetros, Milimetros;
	int i, nroConversoes;
	
	i=1;
	nroConversoes=10;
	
	printf("Conversão de medidas\n\n");
	
	do{
		
		printf("%dª conversão:\n\n", i);
		printf("\nDigite um valor em centímetros:");
			scanf("%f",&Centimetros);
		
		//Efetua o cáculo e retorna o resutado ao usuário.
		Metros = Centimetros / 100;
		Decimetros = Centimetros / 10;
		Milimetros = Centimetros / 0.1000;
		
		printf("Medida em metros: %.2f m\n", Metros);
		printf("Medida em decimetros: %.2f decm\n", Decimetros);
		printf("Medida em milimetros: %.2f cm\n", Milimetros);
		
	i++;	
	}while(i<=nroConversoes);

	
	return 0;
}
