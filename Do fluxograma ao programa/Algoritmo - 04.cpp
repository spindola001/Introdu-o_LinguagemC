#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*
O programa a seguir c�lcula a �rea de um circulo.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, Pi, Area;
	
	printf("Calculando a �rea de um circulo\n");
	printf("Digite o valor do raio: ");
		scanf("%f",&r);
	
	//Efetua o c�clculo e devolve o resultado ao usu�rio.
	Pi = 3.14;
	Area = Pi * (pow(r,2));
	
	printf("A �rea do do c�rculo de raio %.2f �: %.2f", r, Area);
	
	return 0;
		 
}
