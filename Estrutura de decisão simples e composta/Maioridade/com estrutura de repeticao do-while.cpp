#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int AnoNasc, Idade, AnoAtual, i, nroPessoas;
	
	i=1;
	nroPessoas=15;
	
	printf("Maioridade\n\n");
	
	do{
		
		printf("Informa��es da %d� pessoa:\n\n", i);
		printf("Digite seu ano de nascimento: ");
			scanf("%d",&AnoNasc);
		printf("Informe o ano atual: ");
			scanf("%d",&AnoAtual);
		
		Idade =  AnoAtual - AnoNasc;
		
		if(Idade >= 18){
			printf("Voc� j� � maior de idade!\n\n");
		}
		else{
			printf("Voc� ainda � menor de idade!\n\n");
		}
		
	i++;
	}while(i<=nroPessoas);
	
	
	return 0;
}
