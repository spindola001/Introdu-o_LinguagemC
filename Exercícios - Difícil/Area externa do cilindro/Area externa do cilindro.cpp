#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir calcula a �rea externa de um cilindro.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Pi, Area_Ex, Raio, Altura;
	printf("�rea exerna de um cilindro");
	
	printf("\nDigite um valor para o raio do cilindro:");
		scanf("%f",&Raio);
	printf("\nDigite um valor para a altura do cilindro:");
		scanf("%f",&Altura);
	
	//Efetua o c�lculo com base em uma f�rmula matem�tica e devolve o resultado ao usu�rio.	
	Pi = 3.14;
	Area_Ex = 2 * ( Pi * Raio * Altura);
	
	printf("\nA �rea externa do cilindro �: %.4f", Area_Ex);
	
	return 0;
}
