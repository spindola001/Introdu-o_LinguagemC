#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir converte celsius em kelvins.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Celsius, Kelvin;
	
	printf("Conversão de temperatura\n");
	printf("Digite uma temperatura em celsius: ");
		scanf("%f",&Celsius);
	
	//Efetua o cálculo e devolve o resultado ao usuário.
	Kelvin = Celsius + 273.15;
	
	printf("O valor digitado em celsius é equivalente a: %.2f kelvins.", Kelvin);
	
	return 0;
}
