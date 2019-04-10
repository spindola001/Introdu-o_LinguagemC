#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir calcula a área externa de um cilindro.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Pi, Area_Ex, Raio, Altura;
	printf("Área exerna de um cilindro");
	
	printf("\nDigite um valor para o raio do cilindro:");
		scanf("%f",&Raio);
	printf("\nDigite um valor para a altura do cilindro:");
		scanf("%f",&Altura);
	
	//Efetua o cálculo com base em uma fórmula matemática e devolve o resultado ao usuário.	
	Pi = 3.14;
	Area_Ex = 2 * ( Pi * Raio * Altura);
	
	printf("\nA área externa do cilindro é: %.4f", Area_Ex);
	
	return 0;
}
