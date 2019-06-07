#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir controla uma poupança, e com base no valor inicialmente depositado 
calcula qual será o saldo após três meses. A remuneração mensal é de 1%.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, meses;
	float DeposInicial, saldoFinal;
	
	printf("Controle de poupança\n\n");
	
	i = 1;
	DeposInicial = 500;
	saldoFinal = DeposInicial;
	puts("Quantos meses serão aplicados?");
		scanf("%d",&meses);
	
	system("cls");
	
	printf("Com base em um depósito inicial no valor de %.2f reais.\n\n", saldoFinal);
	
	while(i<=meses){
		//Efetua o calculo e retorna ao usuário o saldo que terá em sua conta após três meses.
		
		DeposInicial = DeposInicial + ((DeposInicial / 100) * 1);
		
		printf("Seu saldo no %dº mês está no valor de %.2f reais.\n\n", i, DeposInicial);
		
		i ++; 
	}
	
	
	
	return 0;
	
}
