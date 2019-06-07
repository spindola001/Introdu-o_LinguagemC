#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

/*
O programa a seguir recebe um valor em cent�metro e o converte para metros, decimetros e milimetros.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Centimetros, Metros, Decimetros, Milimetros;
	int i, nroConversoes;
	
	i=1;
	nroConversoes=10;
	
	printf("Convers�o de medidas\n\n");
	
	do{
		
		printf("%d� convers�o:\n\n", i);
		printf("\nDigite um valor em cent�metros:");
			scanf("%f",&Centimetros);
		
		//Efetua o c�culo e retorna o resutado ao usu�rio.
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
