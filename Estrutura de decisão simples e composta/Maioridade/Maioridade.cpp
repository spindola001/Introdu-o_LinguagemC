#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int AnoNasc, Idade, AnoAtual;
	
	printf("Maioridade\n\n");
	printf("Digite seu ano de nascimento: ");
		scanf("%d",&AnoNasc);
	printf("Informe o ano atual: ");
		scanf("%d",&AnoAtual);
	
	Idade =  AnoAtual - AnoNasc;
	
	if(Idade >= 18){
		printf("Voc� j� � maior de idade!");
	}
	else{
		printf("Voc� ainda � menor de idade!");
	}
	return 0;
}
