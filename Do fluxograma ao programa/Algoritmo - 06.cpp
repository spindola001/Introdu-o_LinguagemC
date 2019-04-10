#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*
O programa a seguir calcula o IMC do usuário.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Peso, Altura, Imc;
	
	printf("Calculando o IMC\n");
	printf("Digite seu peso: ");
		scanf("%f",&Peso);
	printf("Digite sua altura: ");
		scanf("%f",&Altura);
	
	//Efetua o cálculo e devolve o resultado ao usuário.	
	Imc = Peso / (pow(Altura,2));
	
	printf("Seu IMC é: %.2f", Imc);
	
	return 0;
	
}
