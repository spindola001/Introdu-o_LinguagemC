#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir recebe um valor em segundos e os converte para minutos e horas.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Segundos, Minutos, Horas;
	
	printf("Convers�o de tempo.");
	printf("\nDigite um valor em segundos:");
		scanf("%f",&Segundos);
	
	//Efetua o c�lculo e retorna o resultado ao usu�rio.
	Minutos = Segundos / 60;
	Horas = Segundos / 3600;
	
	printf("O valor informado em minutos �: %.2f minutos", Minutos);
	printf("\nO valor informado em horas �: %.2f horas", Horas);
	
	return 0;
}
