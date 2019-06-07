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
	int N_Dep, i, nroFunc;
	
	i = 1;
	nroFunc = 10;
	
	printf("Calculo salarial\n\n");
	
	do{
		
		printf("%dº Funcionário:\n\n", i);
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
			
		printf("O salário bruto é: %.2f reais.\n", SalarioBruto);
		printf("O salário líquido é: %.2f reais.\n", SalarioLiq);
		
		i++;
		
	}while(i<=nroFunc);
	
	system("pause");
	
	return 0;
}
