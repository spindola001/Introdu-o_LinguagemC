#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir recebe um valor em cent�metro e o converte para metros, decimetros e milimetros.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Centimetros, Metros, Decimetros, Milimetros;
	printf("Convers�o de medidas");
	
	printf("\nDigite um valor em cent�metros:");
		scanf("%f",&Centimetros);
	
	//Efetua o c�culo e retorna o resutado ao usu�rio.
	Metros = Centimetros / 100;
	Decimetros = Centimetros / 10;
	Milimetros = Centimetros / 0.1000;
	
	printf("\nMedida em metros: %.2f m", Metros);
	printf("\nMedida em decimetros: %.2f decm", Decimetros);
	printf("\nMedida em milimetros: %.2f cm", Milimetros);
	
	return 0;
}
