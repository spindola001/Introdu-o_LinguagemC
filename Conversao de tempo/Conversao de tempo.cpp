#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float Segundos, Minutos, Horas;
	
	printf("Conversão de tempo.");
	printf("\nDigite um valor em segundos:");
		scanf("%f",&Segundos);
	
	Minutos = Segundos / 60;
	Horas = Segundos / 3600;
	
	printf("O valor informado em minutos é: %.2f minutos", Minutos);
	printf("\nO valor informado em horas é: %.2f horas", Horas);
	
	return 0;
}
