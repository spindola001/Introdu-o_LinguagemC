#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int anoNasc, resultadoSoma, perfil;
	
	printf("Perfil pessoal\n");
	printf("Informe seu ano de nascimento: ");
		scanf("%d",&anoNasc);
	
	resultadoSoma = anoNasc + 2019;
	perfil = resultadoSoma % 5;
	
	switch (perfil){
		case 0: printf("Você é tímido!\n");
		break;
		case 1: printf("Você é sonhador!\n");
		break;
		case 2: printf("Você é paquerador!\n");
		break;
		case 3: printf("Você é atraente!\n");
		break;
		case 4: printf("Você é irresistíve!\n");
		break;
		default: printf("Não encontramos seu perfil. Tente novamente!\n");
		break;
	}
	
	system("pause");
	
	return 0;
}
