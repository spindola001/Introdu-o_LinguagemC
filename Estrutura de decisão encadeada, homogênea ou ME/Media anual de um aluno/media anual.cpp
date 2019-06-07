#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir calcula a média anual de um aluno
com base em suas notas do primeiro ao quarto bimestre.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	char Nome[15];
	float Nota1, Nota2, Nota3, Nota4, Media;
	printf("Média anual de um aluno.");
	
	printf("\nDigite o nome do aluno:");
		scanf("%s",&Nome);
	printf("Digite a nota do primeiro bimestre:");
		scanf("%f",&Nota1);
	printf("Digite a nota do segundo bimestre:");
		scanf("%f",&Nota2);
	printf("Digite a nota do terceiro bimestre:");
		scanf("%f",&Nota3);
	printf("Digite a nota do quarto bimestre:");
		scanf("%f",&Nota4);
	
	//Efetua o cálculo e retorna o resultado ao usuário.
	Media = (Nota1 + Nota2 + Nota3 + Nota4)/4;
	
	system("CLS");
	
	printf("A média anual do aluno %s é: %.1f\n\n", Nome, Media);
	
	if (Media > 9)
		printf("Aluno aprovado! Conceito: A\n");
	else{
		if (Media >= 7 && Media <= 8.9)
			printf("Aluno aprovado! Conceito: B\n");
		else{
			if (Media >= 5 && Media < 6.9)
				printf("Aluno aprovado! Conceito C\n");
			else{
				if (Media > 2.5 && Media < 4.9)
					printf("Aluno reprovado! Conceito: D\n");
				else{
					if (Media < 2.5)
						printf("Aluno reprovado! Conceito: E\n");
				}
			}
		}
	}
	
	system("PAUSE");
	
	return 0;
}
