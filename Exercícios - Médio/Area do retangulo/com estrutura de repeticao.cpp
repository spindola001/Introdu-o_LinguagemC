#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa calcula a �rea de um tri�ngulo
 com base em uma f�rmula matem�tica.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vezes;
	float Base, Altura, Area;
	printf("�rea de um ret�ngulo.\n\n");
	
	i = 1;
	
	printf("Quantos valores deseja calcular?");
		scanf("%d",&vezes);
		
	system("cls"); 
	
	while(i <= vezes){
		
		printf("Digite um valor para a base do ret�ngulo:\n");
			scanf("%f",&Base);
		printf("Digite um valor para a altura do ret�ngulo:\n");
			scanf("%f",&Altura);
			
		//Efetua o calculo e retorna o resultado ao usu�rio.
		Area = Base * Altura;
		
		printf("A �rea do %d� ret�ngulo apresentado �: %.2f\n\n", i, Area);
		
		i++;
	}
	
	
	
	return 0;
}
