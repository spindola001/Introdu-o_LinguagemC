#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*
O programa a seguir cálcula a área de um circulo.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, Pi, Area;
	
	printf("Calculando a área de um circulo\n");
	printf("Digite o valor do raio: ");
		scanf("%f",&r);
	
	//Efetua o cáclculo e devolve o resultado ao usuário.
	Pi = 3.14;
	Area = Pi * (pow(r,2));
	
	printf("A área do do círculo de raio %.2f é: %.2f", r, Area);
	
	return 0;
		 
}
