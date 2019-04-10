#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
O programa a seguir informa ao usuário, seu salário líquido e bruto,
com base em suas horas trabalhadas no mês multiplicadas pelo valor da
hora trabalhada e seu bônus por cada dependente.
*/
int main(){
	setlocale(LC_ALL, "Portuguese");
	float SalarioLiq, SalarioBruto, ValorHora, HorasMes, BonusDep;
	int N_Dep;
	
	//Pede os valores ao usuário, bem como o número de dependentes.
	printf("Calculo salarial");
	printf("\nDigite o número de dependentes:");
		scanf("%d",&N_Dep);
	printf("Digite o valor da hora trabalhada:");
		scanf("%f",&ValorHora);
	printf("Digite a quantidade de horas trabalhadas no mês:");
		scanf("%f",&HorasMes);
	
	//Efetua o cálculo e retorna para o usuário, o valor de seu salário líquido e bruto.	
	BonusDep = 300;
	SalarioBruto = ValorHora * HorasMes;
	SalarioLiq = SalarioBruto + (N_Dep * BonusDep);
	
	printf("O salário bruto é: %.2f reais.", SalarioBruto);
	printf("\nO salário líquido é: %.2f reais.", SalarioLiq);
	
	return 0;
}
