#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir recebe um valor em centímetro e o converte para metros, decimetros e milimetros.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Centimetros, Metros, Decimetros, Milimetros;
	printf("Conversão de medidas");
	
	printf("\nDigite um valor em centímetros:");
		scanf("%f",&Centimetros);
	
	//Efetua o cáculo e retorna o resutado ao usuário.
	Metros = Centimetros / 100;
	Decimetros = Centimetros / 10;
	Milimetros = Centimetros / 0.1000;
	
	printf("\nMedida em metros: %.2f m", Metros);
	printf("\nMedida em decimetros: %.2f decm", Decimetros);
	printf("\nMedida em milimetros: %.2f cm", Milimetros);
	
	return 0;
}
