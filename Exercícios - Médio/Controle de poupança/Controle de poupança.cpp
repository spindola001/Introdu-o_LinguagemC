#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir controla uma poupança, e com base no valor inicialmente depositado 
calcula qual será o saldo após três meses. A remuneração mensal é de 1%.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float DeposInicial, Mes1, Mes2, Mes3;
	
	printf("Controle de poupança");
	
	//Efetua o calculo e retorna ao usuário o saldo que terá em sua conta após três meses.
	DeposInicial = 500;
	Mes1 = DeposInicial + ((DeposInicial / 100) * 1);
	Mes2 = Mes1 + ((Mes1 / 100) * 1);
	Mes3 = Mes2 + ((Mes2 / 100) * 1);
	
	printf("\nCom base em um depósito inicial de %.2f reais, \npodemos prever que seu saldo em três meses será de: %.2f reais.", DeposInicial, Mes3);
	
	return 0;
	
}
