#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int opcaoMenu;
	float saldoDep, saldoIni, saldoFin, saque, emprest, dep;
	
	printf("Caixa eletr�nico\n");
	
	saldoIni = 20000;
	
	printf("Seu saldo inical � de %.2f reais.\n", saldoIni);
	printf(" 1 - saque\n 2 - empr�stimo\n 3 - saldo\n 4 - dep�sito\n\n");
	printf("Escolha uma op��o: ");
		scanf("%d",&opcaoMenu);
		
	system("CLS");	
		
	switch (opcaoMenu){
		case 1: printf("Informe o valor do saque: ");
					scanf("%f",&saque);
		
			saldoFin = saldoIni - saque;
		
			printf("Seu saldo final � de %.2f reais.\n", saldoFin);
		break;
		case 2: printf("Informe o valor do empr�stimo: ");
					scanf("%f",&emprest);
					
			saldoFin = saldoIni + emprest;
			
			printf("Seu saldo final � de %.2f reais.\n", saldoFin);
		break;
		case 3: printf("Seu saldo � de %.2f reais.\n", saldoIni);
		break;
		case 4: printf("Informe o valor do dep�sito: ");
					scanf("%f",&dep);
		
			saldoFin = saldoIni + dep;
		  	
		  	printf("Seu saldo final � de %.2f reais.\n", saldoFin);
		break;
		default: printf("Comando inv�lido! Tente novamente...\n");
		break;
	}
	
	system("PAUSE");
	
	return 0;
}
