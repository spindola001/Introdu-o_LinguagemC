#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	int opcaoMenu;
	float saldoDep, saldoIni, saldoFin, saque, emprest, dep;
	
	printf("Caixa eletrônico\n");
	
	saldoIni = 20000;
	
	printf("Seu saldo inical é de %.2f reais.\n", saldoIni);
	printf(" 1 - saque\n 2 - empréstimo\n 3 - saldo\n 4 - depósito\n\n");
	printf("Escolha uma opção: ");
		scanf("%d",&opcaoMenu);
		
	system("CLS");	
		
	switch (opcaoMenu){
		case 1: printf("Informe o valor do saque: ");
					scanf("%f",&saque);
		
			saldoFin = saldoIni - saque;
		
			printf("Seu saldo final é de %.2f reais.\n", saldoFin);
		break;
		case 2: printf("Informe o valor do empréstimo: ");
					scanf("%f",&emprest);
					
			saldoFin = saldoIni + emprest;
			
			printf("Seu saldo final é de %.2f reais.\n", saldoFin);
		break;
		case 3: printf("Seu saldo é de %.2f reais.\n", saldoIni);
		break;
		case 4: printf("Informe o valor do depósito: ");
					scanf("%f",&dep);
		
			saldoFin = saldoIni + dep;
		  	
		  	printf("Seu saldo final é de %.2f reais.\n", saldoFin);
		break;
		default: printf("Comando inválido! Tente novamente...\n");
		break;
	}
	
	system("PAUSE");
	
	return 0;
}
