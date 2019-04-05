#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float SalarioLiq, SalarioBruto, ValorHora, HorasMes, BonusDep;
	int N_Dep;
	
	printf("Calculo salarial");
	printf("\nDigite o número de dependentes:");
		scanf("%d",&N_Dep);
	printf("Digite o valor da hora trabalhada:");
		scanf("%f",&ValorHora);
	printf("Digite a quantidade de horas trabalhadas no mês:");
		scanf("%f",&HorasMes);
		
	BonusDep = 300;
	SalarioBruto = ValorHora * HorasMes;
	SalarioLiq = SalarioBruto + (N_Dep * BonusDep);
	
	printf("O salário bruto é: %.2f reais.", SalarioBruto);
	printf("\nO salário líquido é: %.2f reais.", SalarioLiq);
	
	return 0;
}
