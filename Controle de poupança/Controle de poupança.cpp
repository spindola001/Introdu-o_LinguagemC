#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float DeposInicial, Mes1, Mes2, Mes3, Remuneracao;
	
	printf("Controle de poupança");
	
	DeposInicial = 500;
	Mes1 = DeposInicial + ((DeposInicial / 100) * 1);
	Mes2 = Mes1 + ((Mes1 / 100) * 1);
	Mes3 = Mes2 + ((Mes2 / 100) * 1);
	
	printf("\nCom base em um depósito inicial de %.2f reais, \npodemos prever que seu saldo em três meses será de: %.2f reais.", DeposInicial, Mes3);
	
	return 0;
	
}
