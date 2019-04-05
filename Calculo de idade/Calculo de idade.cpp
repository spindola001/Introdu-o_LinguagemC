#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int AnoNasc, IdadeAtual, Idade2050, AnoAtual;
	printf("Calculo de idade");
	printf("\nDigite o ano atual:");
		scanf("%d",&AnoAtual);
	printf("Digite seu ano de nascimento:");
		scanf("%d",&AnoNasc);
		
	IdadeAtual = AnoAtual - AnoNasc;
	Idade2050 = 2050 - AnoNasc;
	
	printf("\nA sua idade atual é: %d\n", IdadeAtual);
	printf("Sua idade em 2050 será: %d", Idade2050);
	
	return 0;
}
