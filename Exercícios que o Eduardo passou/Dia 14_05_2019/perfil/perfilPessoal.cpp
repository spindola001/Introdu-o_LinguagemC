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
		case 0: printf("Voc� � t�mido!\n");
		break;
		case 1: printf("Voc� � sonhador!\n");
		break;
		case 2: printf("Voc� � paquerador!\n");
		break;
		case 3: printf("Voc� � atraente!\n");
		break;
		case 4: printf("Voc� � irresist�ve!\n");
		break;
		default: printf("N�o encontramos seu perfil. Tente novamente!\n");
		break;
	}
	
	system("pause");
	
	return 0;
}
