#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir calcula a �rea de um tri�ngulo
com base em uma f�rmula matem�tica.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Base, Altura, Area;
	int i, nroTriang;
	printf("�rea de um tri�ngulo.\n\n");
	
	i = 1;
	nroTriang = 8;
	
	do{
	    
		printf("%d� triangulo:", i);	
		printf("\nDigite um valor para a base do tri�ngulo:");
			scanf("%f",&Base);
		printf("Digite um valor para a altura do tri�ngulo:");
			scanf("%f",&Altura);
		
		//Efetua o c�lculo e retorna o resultado ao usu�rio.
		Area = (Base * Altura)/2;
		
		printf("A �rea do tri�ngulo apresentado �: %.2f\n\n", Area);	
		
	i++;
	}while(i<=nroTriang);
	
	system("pause");
	
	return 0;
}
