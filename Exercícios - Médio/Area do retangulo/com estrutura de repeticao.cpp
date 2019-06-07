#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa calcula a área de um triângulo
 com base em uma fórmula matemática.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vezes;
	float Base, Altura, Area;
	printf("Área de um retângulo.\n\n");
	
	i = 1;
	
	printf("Quantos valores deseja calcular?");
		scanf("%d",&vezes);
		
	system("cls"); 
	
	while(i <= vezes){
		
		printf("Digite um valor para a base do retângulo:\n");
			scanf("%f",&Base);
		printf("Digite um valor para a altura do retângulo:\n");
			scanf("%f",&Altura);
			
		//Efetua o calculo e retorna o resultado ao usuário.
		Area = Base * Altura;
		
		printf("A área do %dº retângulo apresentado é: %.2f\n\n", i, Area);
		
		i++;
	}
	
	
	
	return 0;
}
