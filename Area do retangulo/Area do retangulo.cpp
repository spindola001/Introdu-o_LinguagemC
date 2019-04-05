#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float Base, Altura, Area;
	printf("Área de um retângulo.");
	printf("\nDigite um valor para a base do retângulo:");
		scanf("%f",&Base);
	printf("Digite um valor para a altura do retângulo:");
		scanf("%f",&Altura);
		
	Area = Base * Altura;
	
	printf("A área do retângulo apresentado é: %.2f", Area);
	
	return 0;
}
