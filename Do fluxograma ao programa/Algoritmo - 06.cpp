#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*
O programa a seguir calcula o IMC do usu�rio.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Peso, Altura, Imc;
	
	printf("Calculando o IMC\n");
	printf("Digite seu peso: ");
		scanf("%f",&Peso);
	printf("Digite sua altura: ");
		scanf("%f",&Altura);
	
	//Efetua o c�lculo e devolve o resultado ao usu�rio.	
	Imc = Peso / (pow(Altura,2));
	
	printf("Seu IMC �: %.2f", Imc);
	
	return 0;
	
}
