#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir controla uma poupan�a, e com base no valor inicialmente depositado 
calcula qual ser� o saldo ap�s tr�s meses. A remunera��o mensal � de 1%.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float DeposInicial, Mes1, Mes2, Mes3;
	
	printf("Controle de poupan�a");
	
	//Efetua o calculo e retorna ao usu�rio o saldo que ter� em sua conta ap�s tr�s meses.
	DeposInicial = 500;
	Mes1 = DeposInicial + ((DeposInicial / 100) * 1);
	Mes2 = Mes1 + ((Mes1 / 100) * 1);
	Mes3 = Mes2 + ((Mes2 / 100) * 1);
	
	printf("\nCom base em um dep�sito inicial de %.2f reais, \npodemos prever que seu saldo em tr�s meses ser� de: %.2f reais.", DeposInicial, Mes3);
	
	return 0;
	
}
