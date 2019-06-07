#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// O programa a seguir teste uma estrura de decisõoes  
int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	float N1, N2, MD;
	
	printf("Media semestral\n\n");
	printf("Informe a nota do primeiro bimestre: ");
		scanf("%f",&N1);
	printf("Informe a nota do segundo bimestre: ");
		scanf("%f",&N2);
	
	MD = (N1 + N2)/ 2;
	
	//Estrutura de decisão simples e composta	
	if (MD >= 5){
		printf("O aluno alcançou a média: %.1f\n", MD);
		printf("Aprovado!");
	}
	else {
		printf("O aluno alcançou a média: %.1f\n", MD);
		printf("Reprovado!");
	}
	
	return 0;
}
