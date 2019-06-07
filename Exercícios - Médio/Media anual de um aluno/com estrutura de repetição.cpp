#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir calcula a média anual de um aluno
com base em suas notas do primeiro ao quarto bimestre.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, alunos;
	char Nome[15];
	float Nota1, Nota2, Nota3, Nota4, Media;
	printf("Média anual de um aluno.\n\n");
	
	i = 1;
	
	printf("Quantidade de alunos: ");
		scanf("%d",&alunos);
	
	system("cls");
		
	while(i <= alunos){
		
			printf("Digite o nome do %dº aluno:", i);
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
			
			printf("A média anual do aluno %s é: %.1f\n\n", Nome, Media);
		
		i++;		
	}
	

	
	return 0;
}
