#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir converte celsius em kelvins.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Celsius, Kelvin;
	
	printf("Convers�o de temperatura\n");
	printf("Digite uma temperatura em celsius: ");
		scanf("%f",&Celsius);
	
	//Efetua o c�lculo e devolve o resultado ao usu�rio.
	Kelvin = Celsius + 273.15;
	
	printf("O valor digitado em celsius � equivalente a: %.2f kelvins.", Kelvin);
	
	return 0;
}
