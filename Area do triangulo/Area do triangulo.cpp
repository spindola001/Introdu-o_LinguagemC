#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float Base, Altura, Area;
	printf("�rea de um tri�ngulo.");
	printf("\nDigite um valor para a base do tri�ngulo:");
		scanf("%f",&Base);
	printf("Digite um valor para a altura do tri�ngulo:");
		scanf("%f",&Altura);
	
	Area = (Base * Altura)/2;
	
	printf("A �rea do tri�ngulo apresentado �: %.2f", Area);
	
	return 0;
}
