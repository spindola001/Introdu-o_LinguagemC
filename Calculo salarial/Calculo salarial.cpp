#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float SalarioLiq, SalarioBruto, ValorHora, HorasMes, BonusDep;
	int N_Dep;
	
	printf("Calculo salarial");
	printf("\nDigite o n�mero de dependentes:");
		scanf("%d",&N_Dep);
	printf("Digite o valor da hora trabalhada:");
		scanf("%f",&ValorHora);
	printf("Digite a quantidade de horas trabalhadas no m�s:");
		scanf("%f",&HorasMes);
		
	BonusDep = 300;
	SalarioBruto = ValorHora * HorasMes;
	SalarioLiq = SalarioBruto + (N_Dep * BonusDep);
	
	printf("O sal�rio bruto �: %.2f reais.", SalarioBruto);
	printf("\nO sal�rio l�quido �: %.2f reais.", SalarioLiq);
	
	return 0;
}
