#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float Base, Altura, Area;
	printf("�rea de um ret�ngulo.");
	printf("\nDigite um valor para a base do ret�ngulo:");
		scanf("%f",&Base);
	printf("Digite um valor para a altura do ret�ngulo:");
		scanf("%f",&Altura);
		
	Area = Base * Altura;
	
	printf("A �rea do ret�ngulo apresentado �: %.2f", Area);
	
	return 0;
}
