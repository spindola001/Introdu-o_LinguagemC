#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir calcula a área de um triângulo
com base em uma fórmula matemática.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Base, Altura, Area;
	int i, nroTriang;
	printf("Área de um triângulo.\n\n");
	
	i = 1;
	nroTriang = 8;
	
	do{
	    
		printf("%dº triangulo:", i);	
		printf("\nDigite um valor para a base do triângulo:");
			scanf("%f",&Base);
		printf("Digite um valor para a altura do triângulo:");
			scanf("%f",&Altura);
		
		//Efetua o cálculo e retorna o resultado ao usuário.
		Area = (Base * Altura)/2;
		
		printf("A área do triângulo apresentado é: %.2f\n\n", Area);	
		
	i++;
	}while(i<=nroTriang);
	
	system("pause");
	
	return 0;
}
