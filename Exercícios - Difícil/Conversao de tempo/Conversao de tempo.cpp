#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir recebe um valor em segundos e os converte para minutos e horas.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Segundos, Minutos, Horas;
	
	printf("Conversão de tempo.");
	printf("\nDigite um valor em segundos:");
		scanf("%f",&Segundos);
	
	//Efetua o cálculo e retorna o resultado ao usuário.
	Minutos = Segundos / 60;
	Horas = Segundos / 3600;
	
	printf("O valor informado em minutos é: %.2f minutos", Minutos);
	printf("\nO valor informado em horas é: %.2f horas", Horas);
	
	return 0;
}
