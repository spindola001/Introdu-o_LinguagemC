#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir controla uma poupan�a, e com base no valor inicialmente depositado 
calcula qual ser� o saldo ap�s tr�s meses. A remunera��o mensal � de 1%.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, meses;
	float DeposInicial, saldoFinal;
	
	printf("Controle de poupan�a\n\n");
	
	i = 1;
	DeposInicial = 500;
	saldoFinal = DeposInicial;
	puts("Quantos meses ser�o aplicados?");
		scanf("%d",&meses);
	
	system("cls");
	
	printf("Com base em um dep�sito inicial no valor de %.2f reais.\n\n", saldoFinal);
	
	while(i<=meses){
		//Efetua o calculo e retorna ao usu�rio o saldo que ter� em sua conta ap�s tr�s meses.
		
		DeposInicial = DeposInicial + ((DeposInicial / 100) * 1);
		
		printf("Seu saldo no %d� m�s est� no valor de %.2f reais.\n\n", i, DeposInicial);
		
		i ++; 
	}
	
	
	
	return 0;
	
}
